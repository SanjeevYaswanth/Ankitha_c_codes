#include <stdio.h>
int main()
{
    int arr[3][3]={{1,2,3}, {2,3,4}, {4,5,6}};
    int row,col;
    for(row = 0 ;row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
}
