/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,count=0,mul,c,result=0,rem;
    printf("enter the number:");
    scanf("%d",&num);
    int q=num;

    while(q!=0)
    {
        q=q/10;
        count++;
    }
    c=count;
    q=num;
    mul=1;
    while(q!=0)
    {
        rem=q%10;
        while(c!=0)
        {
            mul=mul*rem;
            c--;
        }
        result=result+mul;
        c=count;
        q=q/10;
        mul=1;
    }
    if(result==num)
        printf("number is armstrong");
        else
        printf("no");

    return 0;
}*/

#include <stdio.h>
int f(void) {
}
int main(void) {
int i;
i = f();
printf("%d",i);
return 0;
}
