#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, arr[10];
   int *ptr;

   ptr = &arr[0];

   printf("Enter the size of array :: ");
   scanf("%d", &n);

   printf("Enter  integers into array:\n ");
   for (i = 0; i < n; i++)
  {
      scanf("%d", ptr);
      ptr++;
   }

   ptr = &arr[n - 1];

   printf("Elements of array in reverse order are :\n");

   for (i = n - 1; i >= 0; i--) {
      printf("%d\t", *ptr);
      ptr--;
   }
    return 0;
}
