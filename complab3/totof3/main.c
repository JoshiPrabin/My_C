#include <stdio.h>
#include <stdlib.h>

struct student{
    float physics;
    float chemistry;
    float maths;
}s[3];

int main()
{
    int i;
    float total;
    printf("enter the marks of students: \n");
    for(i=0;i<=3;i++){
        printf("for student %d\n",i+1);
        printf("in physics: ");
        scanf("%f",&s[i].physics);
        printf("in chemistry: ");
        scanf("%f",&s[i].chemistry);
        printf("in mathematics: ");
        scanf("%d",&s[i].maths);
    }
    for(i=0;i<3;i++){
         printf("for student %d\n",i+1);
         total=s[i].physics+s[i].chemistry+s[i].maths;
         printf("his total marks are: %.2f",total);
    }
    //printf("Hello world!\n");
    return 0;
}
