#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fptr;
    char c;
    fptr = fopen("welcome.txt", "w");
    if(fptr == NULL)
    {
    printf("!error");
    exit(0);
    }
    fputs("welcome to lalitpur engineering college", fptr);
    rewind(fptr);
     printf("The content from file: \n");
    while( (c = fgetc(fptr))!=EOF)
    {
         printf("%c", c);
    }
    printf("%c", c);


    fclose(fptr);
    return (0);
}
