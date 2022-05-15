#include <stdio.h>
#include <stdlib.h>

int lcm_hcf(int ,int);
main()
{
    int no1,no2;
    int lcm,hcf;
    printf("Enter two Numbers: ");
    scanf("%d %d",&no1,&no2);

    hcf=lcm_hcf(no1,no2);
    lcm = (no1*no2)/hcf;

    printf("HCF of %d and %d = %d\n",no1,no2,hcf);
    printf("LCM of %d and %d = %d\n",no1,no2,lcm);
}
int lcm_hcf(int n1,int n2)
{
    int hcf,remainder,num,den;
    if (n1>n2)
    {
        num=n1;
        den=n2;
    }
    else
    {
        num=n2;
        den=n1;
    }
    remainder=num%den;
    while (remainder!=0)
    {
        num=den;
        den=remainder;
        remainder=num%den;
    }
    hcf = den;
  return hcf;
}
