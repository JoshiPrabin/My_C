#include <stdio.h>
#include <stdlib.h>

void input (int t[ ] [2]) ;
void output (int t1[ ] [2] , int t2[ ] [2] );
main( )
{
 int a[2] [2], b[2] [2] ;
    printf ("Enter first array :\n" ) ;
    input(a);
    printf ("enter second array :\n");
    input(b);
    printf("the answer is:\n");
    output(a,b) ;
    getch( ) ;
}
void input (int t[ ][2])
{
 int i,j ;
    for (i=0 ; i<=1 ; i++)
        for (j=0 ; j<=1 ; j++)
            scanf ("%d", &t [ i] [j]) ;
}
 void output (int t1[ ] [2], int t2[ ] [2])
{
     int i,j ;
    int s[2] [ 2] ;
    for (i=0; i<=1 ; i++)
        for (j=0 ; j<=1 ; j++)
            s[i] [j] = t1[i] [j] - t2[i] [j] ;
    for (i=0 ; i<=1 ; i++)
{
        for ( j = 0 ; j<=1 ; j++)
            printf("%d\t", s[i] [j]) ;
                printf("\n") ;
}
}
