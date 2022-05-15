#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    int a[m][n],b[m][n],c[m][n],i,j;
    int *p1,*p2;
    printf("enter the number of rows: ");
    scanf("%d",&m);
    printf("enter the number of columns: ");
    scanf("%d",&n);
	printf("enter your first matrix:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("enter your second matrix:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
    p1=a[0][0];
    p2=b[0][0];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			c[i][j] = ((*(*(p1+i)+j)) + (*(*(p2+i)+j)));
	printf("the sum of your entered matrices is:\n");
	for(i=0;i<m;i++)
        {
		for(j=0;j<n;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}

    //printf("Hello world!\n");
        return ;
}
