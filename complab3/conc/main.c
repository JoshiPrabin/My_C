/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10],str2[10],str3[10];
    int i,j;
    printf("enter first string: ");
    gets(str1);
    printf("enter second string: ");
    gets(str2);
    for(i=1;str3[i]!='\0';i++){
        for(j=0;str1[j]!='\0';j++){
            str3[i]=str2[j];
        }
       // str1[i]=0;
    }
     for(i=1;str3[i]!='\0';i++){
        for(j=0;str2[j]!='\0';j++){
            str3[i]=str2[j];

        }
        str3[10]='\0';
       // str1[i]=0;
    }


    printf("%s",str3);
   // puts(str1);
    //printf("Hello world!\n");
    return 0;
}*/
#include <stdio.h>

int main()
{

    char str1[10], str2[10];

    char str3[10];

    int i = 0, j = 0;

    printf("\nFirst string: %s", str1);
    gets(str1);
    printf("\nSecond string: %s", str2);
    gets(str2);

    while (str1[i] != '\0') {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0') {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    printf("\nConcatenated string: %s", str3);

    return 0;
}
