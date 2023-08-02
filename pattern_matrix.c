#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,rows,col;
    printf("enter number of rows :");
    scanf("%d",&rows);
    printf("enter number of col :");
    scanf("%d",&col);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i%2==1|j%2==1)
                {
                printf(" 1 ");
                }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}
