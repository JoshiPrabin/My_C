#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int i,j,sum=0;
    int *ptr;

    printf("enter your matrix: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    ptr=a;
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+ *ptr;
            ptr++;
        }
    }
    printf("the sum is: %d",sum);
   // printf("Hello world!\n");
    return 0;
}
