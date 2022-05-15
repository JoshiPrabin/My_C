#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("input a number :");
    scanf("%d",&a);
    b=a%5;
    c=a%7;
    if(c==0 && b!=0){
        printf("it is exactly divisible by 7 and not by 5");
    }
    else if(b==0  && c!=0){
        printf("it is exactly divisible by 5 but not by 7");
    }
    else {
        printf("opps");
    }


    return 0;
}
