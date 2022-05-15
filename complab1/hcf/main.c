#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    if(a<b){
       do{
        temp=b;
        b=a%b;
        a=temp;
       }while(b>0);
       goto label;
       }
       else if(a>b){
        temp=a;
        a=b;
        b=temp;
       }

       label:
           printf("%d",a);

    return 0;
}
