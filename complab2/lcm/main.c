#include <stdio.h>
#include <stdlib.h>

void lcm();

int main()
{
    lcm();

    return 0;
}
void lcm()
{
    int n1,n2,max;
    printf("enter two positive integers: ");
    scanf("%d%d",&n1,&n2);
    while(1){
        if(max%n1==0 && max%n2==0){
            printf("%d is the lcm",max);
            break;
            ++max;
        }

    }
}
