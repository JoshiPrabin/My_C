#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10];
    char vow[6]={'a','e','i','o','u'};
    int i,j,a,b=0;
    printf("enter a string: ");
    gets(str);
    a=strlen(str);
    for(i=0;i<a;i++){
        for(j=0;j<5;j++){
            if(str[i]==vow[j])
                b+=1;
        }
    }
    printf("the number of vowels in the string is: %d",b);
   // printf("Hello world!\n");
    return 0;
}
