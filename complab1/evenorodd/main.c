#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d",&a);
    b=a%2;
    if(b==0){
        goto label;
    }

    else{
        printf("a is odd");
    }
     label:
        printf("a is even");

    return 0;
}
