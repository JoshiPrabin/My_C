#include <stdio.h>
#include <stdlib.h>

int add(int a,int b,int c){
    int d;
    d = a+b+c;
    return(d);

}

int main()
{
    int a,b,c,d,n;
    printf("enter the three numbers that you want to add: ");
    scanf("%d%d%d",&a,&b,&c);
    n = add(a, b, c);
    printf("the sum is: %d",n);
    return 0;
}
