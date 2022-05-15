#include <stdio.h>
#include <stdlib.h>

int leap(int a);

int main()
{
    int a,n;
    printf("enter a year: ");
    scanf("%d",&a);
    n=leap(a);
    if(n==0){
        printf("%d is a leap year",a);
    }
    else{
        printf("%d is not a leap year",a);
    }
    return 0;
}
int leap(a)
{
    int n;
    n=a%4;
    if (n==0){
            return n;

    }
    else if(n%4!=0){
            return n;
    }
}
