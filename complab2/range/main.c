#include <stdio.h>
#include <stdlib.h>

int range(A,B);

int main()
{
    int A,B;
    printf("enter the two extreme values of the range: ");
    scanf("%d%d",&A,&B);
    range(A,B);

    return 0;
}
int range(A,B)
{
    int i,n;
    for(i=A;i<=B;i++){
        if(i%3==0){
                printf("%d\t",i);

        }
    }
}

