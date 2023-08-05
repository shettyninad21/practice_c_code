#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count,i;
    char a[100];

    printf("enter the word:" );
    gets(a);

    n=strlen(a);

    for(i=0;i<n;i++){
        if(a[i]>='a' && a[i]<='z'){
            count++;
        }
    }
    printf("the no. of smaller case letters are: %d",count);
    return 0;
}
