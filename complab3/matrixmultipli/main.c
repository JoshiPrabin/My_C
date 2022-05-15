#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k,sum=0,m,n;
    printf("enter the number of rows: ");
    scanf("%d",&m);
    printf("enter the number of columns: ");
    scanf("%d",&n);
    int a[m][n],b[m][n],ans[m][n];
    printf("enter your first matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf("enter your second matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            for(k=0;k<3;k++){
                sum+=a[i][k] * b[k][j];
                ans[i][j]=sum;
        }

        sum=0;

    }
    }
    printf("your answer is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",ans[i][j]);
        }
                    printf("\n");


    }
    //printf("Hello world!\n");
    return 0;
}
