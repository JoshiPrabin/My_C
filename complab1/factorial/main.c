#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fact=1,i;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the answer is %d",fact);

    return 0;
}
