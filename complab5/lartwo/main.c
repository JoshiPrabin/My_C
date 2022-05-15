#include <stdio.h>
#include <stdlib.h>

int lar(int*,int*);

int main()
{
    int a,b,large;
    printf("enter the two numbers: ");
    scanf("%d%d",&a,&b);
    large = lar(&a,&b);
    printf("the larger number is: %d",large);
    return 0;
}
int lar(int*x,int*y)
{
    int z;
    if (*x>*y){
        z=*x;
    }
    else{
        z=*y;
    }
    return (z);
}
