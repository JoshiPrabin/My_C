#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[10];
    char revStr[10];

    char *strPtr = str;
    char *revPtr = revStr;

    int len = -1;

    printf("Enter The String Without Space: ");
    scanf("%s",str);

    while(*strPtr)
  {
      strPtr++;
      len++;
    }

    while (len >= 0)
  {
      strPtr--;
      *revPtr = *strPtr;
      revPtr++;
      --len;
    }

     *revPtr='\0';
     printf("\n\nReverse String Is :%s",revStr);
    return 0;
}
