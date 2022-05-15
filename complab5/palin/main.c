#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    char *p,*t;
    printf("enter a string: ");
    scanf("%c",str);
    for(p=pal;*p!=NULL;p++){
        for(t=pal;p--;p>=t){
            if(*p==*t){
                p--;
                t++;

            }
        }

    }
    if(t>p)
        printf("entered string is palindrome.\n");
    else
        printf("entered string is not palinndrome.");
   // printf("Hello world!\n");
    return 0;
}
