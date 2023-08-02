#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,mul;
    printf("enter the number ;");
    scanf("%d",&num);
    printf("multiple of %d :\n",num);
    for(i=1;i<=10;i++){
        mul=num*i;
        printf("\n%d * %d =%d",num,i,mul);
    }
    return 0;
}
