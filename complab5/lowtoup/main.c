#include <stdio.h>
#include <stdlib.h>

void conversion(char*);

int main()
{
    char input;
     printf("enter character: \n");
     scanf("%c",&input);
     conversion(&input);
     printf("\n The coversion character is: \t%c",input);
     return 0;

}

void conversion(char*c)
 {
     if(*c>=97 && *c<=122)
     {
     *c=*c-32;
     }
     else if ( *c>=65 && *c<=90)
     {
     *c=*c+32;
     }
 }
