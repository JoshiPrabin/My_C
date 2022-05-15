#include<stdio.h>
#include<stdlib.h>

int main() {
	int n,*arr,max,min;

	printf("Enter size of the array: ");
	scanf("%d",&n);

	arr=(int*)calloc(n,sizeof(int));

	printf("Enter the array: \n");
	for(int i=0;i<n;i++){
		scanf("%d",(arr+i));
	}

	max=arr[0];
	for(int i=0;i<n;i++) {
		if(max<arr[i]) {
			max=arr[i];
		}
	}

	min=arr[0];
	for(int i=0;i<n;i++) {
		if(min>arr[i]) {
			min=arr[i];
		}
	}

	printf("Maximum and minimum numbers in the array are: %d, %d\n",max,min);
}
