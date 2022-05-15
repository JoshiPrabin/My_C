#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    printf("enter any english character: ");
    scanf("%c",&choice);
    switch(choice){
        case'a':
        printf("vowel");
        break;
        case'e':
        printf("vowel");
        break;
        case'i':
        printf("vowel");
        break;
        case'o':
        printf("vowel");
        break;
        case'u':
        printf("vowel");
        break;
        default:
            printf("consonant");

    }

    return 0;
}
