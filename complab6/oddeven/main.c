#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char ch;
    FILE *f1,*f2;
    f1=fopen("even.txt","a+");
    f2=fopen("odd.txt","a+");
    do{
        printf("enter the value of n: ");
        scanf("%d",&n);
        if(n%2==0){
            fprintf(f1,"%d\n",n);
        }
        else{
            fprintf(f2,"%d\n",n);
        }
        printf("do you want to add? ");
        ch=getch();

       }while(ch='y'||ch=='Y');
        fclose(f1);
        fclose(f2);

    //printf("Hello world!\n");
    return 0;
}
