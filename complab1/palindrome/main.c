#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,rem,rev=0,a;
    printf("enter the value of n: ");
    scanf("%d",&n);
    a=n;
    do
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    } while(a!=0);
    if(n==rev){
        printf("%d is palindrome",n);
    }
      else {
            printf("%d is not palindrome",n);
      }

    return 0;
}
