#include <stdio.h>
#include <stdlib.h>

struct complex mul(struct complex,struct complex);

struct complex{
    float real;
    float imag;
};

int main()
{
    struct complex a,b,c;
    printf("for a\n");
    printf("real part: ");
    scanf("%f",&a.real);
    printf("imaginary part: ");
    scanf("%f",&a.imag);
    printf("for b\n");
      printf("real part: ");
    scanf("%f",&b.real);
    printf("imaginary part: ");
    scanf("%f",&b.imag);

    c=mul(a,b);

    printf("%f + i%f",c.real,c.imag);
    //printf("Hello world!\n");
    return 0;
}
struct complex mul(struct complex a,struct complex b)
{
    struct complex c;
    c.real=a.real*b.real-a.imag*b.imag;
    c.imag=a.real*b.imag+b.real*a.imag;
    return c;
};
