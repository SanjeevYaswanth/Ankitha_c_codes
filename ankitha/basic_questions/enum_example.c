#include <stdio.h>

enum fruits {
     apple=1,
     orange,
     banana,
     grapes,
     kiwi,
};


int main()
{
    enum fruits type;
    printf("Enter the type: ");
    scanf("%d",&type);
    switch(type)
    {
        case 1:
        {
            printf("apple\n");
        }
        break;
        case 2:
        {
            printf("orange\n");
        }
        break;
        case 3:
        {
            printf("banana\n");
        }
        break;
        case 4:
        {
            printf("grapes\n");
        }
        break;
        case 5:
        {
            printf("kiwi\n");
        }
        break;
        default:
        {
            printf("Wrong i/p\n");
        }
        break;
    }
}
