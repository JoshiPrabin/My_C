#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int i,j,sum=0;
    int a[3][3];
    printf("enter your matrix: \n");
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[3][3]);
        }
    }
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum+=a[i][j];
        }
    }
    printf("the sum of all the elements in your entered matrix is: %d",sum );*/
   // printf("Hello world!\n");

   int main()
{
    int a[3][3],i,j,sum=0;

    printf("Enter elements in array : ");
    for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
    {
            scanf("%d",&a[i][j]);
    }
    }
      for(i=0; i<3; i++)
    {
         for(j=0; j<3; j++)
    {
            sum+=a[i][j];
    }
    }

    printf("sum of array is : %d",sum);
    return 0;

}

