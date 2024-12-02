#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/uaccess.h>
#include <linux/string.h>
#include <linux/device.h>

#define CHAR_DEV_NAME "insert_string"
#define SUCCESS       0


int count =0;


static char *char_dev_buf;
static struct cdev *my_cdev;
dev_t my_dev;

static struct class *my_class;

static int char_dev_open(struct inode *inode, struct file *file)
{
	printk(KERN_INFO"Iam in open function\n");
	return SUCCESS;
}

static int char_dev_release(struct inode *inode, struct file *file)
{
	printk(KERN_INFO"Iam in release function\n");
	return SUCCESS;
}

static ssize_t char_dev_write(struct file *file, const char *buf, size_t lbuf, loff_t *ppos)
{
	int nbytes = 0;
	nbytes = lbuf - copy_from_user(char_dev_buf + *ppos , buf, strlen(buf));
	nbytes += *ppos;
	printk(KERN_INFO"data write :%s position : %d \n",char_dev_buf,*ppos);
	return nbytes;
}

static ssize_t char_dev_read(struct file *file, char *buf,size_t lbuf, loff_t *ppos)
{
	int nbytes = 0;
	nbytes = lbuf - copy_to_user(char_dev_buf + *ppos, buf, strlen(buf));
	nbytes += *ppos;
	printk(KERN_INFO"data read from user: %s positions: %d\n",char_dev_buf,*ppos);
	return nbytes;
}

static struct file_operations my_fops ={

	.owner = THIS_MODULE,
	.open  = char_dev_open,
	.write = char_dev_write,
	.read = char_dev_read,
	.release = char_dev_release,
};

static __init int char_dev_init(void)
{
	if((alloc_chrdev_region(my_dev,1,count,CHAR_DEV_NAME)) < 0 )
	{
		printk(KERN_ERR"failed to reserve major and minor number\n");
	}
	if(!(my_cdev = cdev_alloc()))
	{
		printk(KERN_ERR"Failed cdev_alloc()\n");
		unregister_chrdev_region(my_dev,1);
		return -1;
	}
	cdev_init(my_cdev, &my_fops);
	int ret;
	ret = cdev_add(my_cdev, my_dev, count);
	if(ret < 0)
	{
		unregister_chrdev_region(my_dev,1);
		printk(KERN_ERR"Failed to register the driver\n");
		return -1;
	}
	
	my_class = class_create(THIS_MODULE,"THIS_VIRTUAL");
	device_create(my_class, NULL, my_dev, NULL, "%s" , "insert_string");
	printk(KERN_INFO"successfully registered driver: %s\n",CHAR_DEV_NAME);
	printk(KERN_INFO"Major number: %d Minor number: %d\n",MAJOR(my_dev), MINOR(my_dev));

	return 0;
}

static __exit void char_dev_exit(void)
{
	device_destroy(my_class, my_dev);
	class_destroy(my_class);
}

module_init(char_dev_init);
module_exit(char_dev_exit);
