#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
        a=i*i;
        printf("%d\t", a);
    }

    return 0;
}
