#include <stdio.h>
#include <stdlib.h>

void pal(char a[]);

int main()
{
    char str[10];
    printf("enter a string: ");
    gets(str);

   pal(str);


   // printf("Hello world!\n");
    return 0;
}
void pal(char str[])
{
    char rev_str[10]={'\0'};
    int i,l=0,a=0;
     for(i=0;str[i]!='\0';i++){
        i++;
    }
    for(i=l-1;i>=0;i--){
        rev_str[l-i-1]=str[i];
    }
    printf("the reversed string is: %s\n",str);
    for(i=0;i<l;i++){
        if(rev_str[i]!=str[i])
            a=0;
    }
    if(a==1){
        printf("%s is palindrome", str);
    }
    else{
        printf("%s is palindrome", str);
    }
}
