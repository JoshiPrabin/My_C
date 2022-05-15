#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[10];
    int i=0;
    printf("enter a string: ");
    gets(s);
    while(s[i]!='\0'){
        i++;
    }
    printf("the length of the string is: %d",i);

   // printf("Hello world!\n");
    return 0;
}
