#include <stdio.h>
#include <stdlib.h>

int fibbyrec(n);

int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("the sum of the fibonacci serie is: %d",fibbyrec(n)-1);
    return 0;
}
int fibbyrec(n)
{
    if(n<=1){
        return(1);
    }
    else{

        return(fibbyrec(n-1)+fibbyrec(n-2));
    }

}
