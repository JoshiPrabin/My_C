#include <stdio.h>
#include <stdlib.h>

float tax(int a);

int main()
{
    int n,i,a;
    float b;
    printf("enter the number of employees: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            b=tax(a);
            printf("your amount of tax is: %0.2f", b);

    }
    return ;

}
float tax(int a){
    int e,i,n;
    float b;
    printf("\n enter your expenses: ");
    scanf("%d",&e);
            if(e<9000){
                b=0.2*e;
                return(b);
             }
    else{
        b=0.25*e;
        return(b);
    }




}
