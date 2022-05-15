#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *week[7]={"sunday",
    "monday",
    "tuesday",
    "wednesday",
    "thursday",
    "friday",
    "saturday"};
    int i;
    for(i=0;i<7;i++){
        printf("%s\n",week[i]);
    }
    //printf("Hello world!\n");
    return 0;
}
