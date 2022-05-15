#include <stdio.h>
#include <stdlib.h>

void sum(int a[3][3],int b[3][3]);

int main()
{
    int *a[3][3] , *b[3][3];

    printf("enter your first matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[3][3]);
        }
    }
    printf("enter your second matrix: \n");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[3][3]);
        }
    }
    sum(&a,&b);
    //printf("Hello world!\n");
    return 0;
}
void sum(int a[3][3],int b[3][3])
{
    int *z[3][3],i,j;
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            *(*(z+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    printf("the sum of the matrices entered is: \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",*(*(z+i)+j));

        }
        printf("\n");
    }
}
