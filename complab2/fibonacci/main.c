#include <stdio.h>
#include <stdlib.h>

int fibonacci(n);

int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("the sum of the fibonacci series is: %d",fibonacci(n));


    return 0;
}
int fibonacci(n)
{
    int a=0,b=1,c,i,sum=0;
    c=a+b;
    sum=c;
    for(i=2;i<n;i++){
            sum=sum+c;

        a=b;

        b=c;
        c=a+b;

    }
    return(sum);
}
