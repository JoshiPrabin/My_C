#include <stdio.h>
#include <stdlib.h>

void hcf();

int main()
{
   hcf();
    return 0;
}
void hcf()
{
    int a,b,temp;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a<b){
        do{
            temp=b;
            b=a%b;
            a=temp;
        }while(b>0);
        printf("%d is the hcf",a);
    }
    else if(a>b){
        temp=a;
        a=b;
        b=temp;
        printf("%d is the hcf",a);
    }

}
