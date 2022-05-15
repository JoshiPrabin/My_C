#include <stdio.h>
#include <stdlib.h>
/*
long sort(int a[10],int);

int main()
{
    int n; int i;
    int a[10];
    printf("enter the number of digits you want to enter: ");
    scanf("%d\n",&n);
    printf("enter your data: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int c=sort(a,n);
    printf("your sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d\t",c);
    }
    return;
}
long sort(int a[10],int n)
{

    int b;
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]>a[j]){
                    b=a[i];
                    a[i]=a[j];
                    a[j]=a;
                }

            }
            return a[i];
        }
}
*/
void sort(int m, int x[ ]);
   main()
   {
       int i;
       int marks[5];

       printf("enter your marks: ");
       for(i = 0; i < 5; i++)
          scanf("%d ", &marks[i]);
       printf("\n\n");

       printf("Marks before sorting\n");
       for(i = 0; i < 5; i++)
          printf("%d ", marks[i]);
       printf("\n\n");

       sort (5, marks);
       printf("Marks after sorting\n");
       for(i = 0; i < 5; i++)
          printf("%4d", marks[i]);
       printf("\n");
   }
   void sort(int m, int x[ ])
   {
       int i, j, t;

       for(i = 1; i <= m-1; i++)
          for(j = 1; j <= m-i; j++)
             if(x[j-1] >= x[j])
             {
                t = x[j-1];
                x[j-1] = x[j];
                x[j] = t;
             }
   }
