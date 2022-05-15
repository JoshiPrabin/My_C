#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b=0,a=0;
    printf("enter how many numbers you want to add: ");
    scanf("%d",&n);
    do{
        b=b+a;
        a=a+1;
    }while(a<=n);
    printf("the sum is : %d",b);
    return 0;
}
