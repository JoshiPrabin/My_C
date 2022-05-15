#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    printf("enter a multi digit integer:  ");
    scanf("%d",&a);
    do {
        a=a%10;
        b=b+a;
    }while(a=0);
    printf("the sum is: %d",&b);

    return 0;
}
