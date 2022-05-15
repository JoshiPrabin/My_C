#include <stdio.h>
#include <stdlib.h>

max(int [],int);
void main()
{
	int a[10];
	int n,m;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter your array:\n");
	for(int i=0;i<10;i++){
        scanf("a[%d]",&i);
	}
	m=max(a,n);
	printf("\n the maximum number is %d",m);
	getch();
}
max(int x[10],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
