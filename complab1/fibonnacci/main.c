#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,sum=0,n,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
       sum=a+b;
       printf("%d\t",a);
       printf("%d\t",sum);
       a=b;
       b=sum;
    }


    return 0;
}
