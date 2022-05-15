#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3];
    int i,j,sum=0;
    printf("enter your first matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<3;i++){
        sum+=a[i][i];
    }
    printf("the sum of the diagonal elements is %d",sum);
   // printf("Hello world!\n");
    return 0;
}
