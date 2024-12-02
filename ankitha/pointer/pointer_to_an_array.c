#include <stdio.h>

int main() {
  int arr[3]={1,2,3};
  int (*ptr)[3] = &arr;
  printf("Size of: %d %d %d\n",sizeof((*ptr)[0]),sizeof((*ptr)[1]),sizeof((*ptr)[2]));
  printf("%p\n%p\n%p\n",&(*ptr[0]),&(*ptr[1]),&(*ptr[2]));
  printf("%d\n%d\n%d\n",(*ptr)[0],(*ptr)[1],(*ptr)[2]);
}
