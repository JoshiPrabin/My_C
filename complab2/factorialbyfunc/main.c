#include <stdio.h>
#include <stdlib.h>

long int factorial (int n)
{
    if (n == 1)
        return (1) ;
    else
        return (n*factorial(n-1)) ;
}
main( )
{
    int num ;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("the factorial is %ld",factorial(num));
}
