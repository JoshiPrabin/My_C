#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int i;
    printf("enter your text: ");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if (str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }

    }
  //  printf("Hello world!\n");
  printf("%s",str);
    return 0;
}
