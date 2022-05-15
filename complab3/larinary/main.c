#include <stdio.h>
#include <stdlib.h>

void lar(int a[10],int n);

int main()
{
    int a[10],i,n;
    printf("enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    lar(a,n);

   // printf("Hello world!\n");
    return 0;
}
void lar(int a[10],int n)
{
    int i;
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){
            printf("%d is greatest",a[i]);
        }
    }

}
