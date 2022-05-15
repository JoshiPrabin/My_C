#include <stdio.h>
#include <stdlib.h>

int primalitycheck(int n);

int main()
{
    int n,a,flag=0,b;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    b=n;
    a=primalitycheck(n);
    if (a == 1){
            printf("1 is neither prime nor composite");

    }
    else if (flag==0){
        printf("%d is prime",n);
    }
    else{
            printf("%d is not prime",n);

    }
    return;
}


int primalitycheck(int n)
{
    int b,i,flag=0;
    for(i=2;i<=b/2;++i){
        if(b%i==0){
            flag=1;
            return(flag);
        }
        else if(flag!=0){
            return(flag);
        }
    }
}
