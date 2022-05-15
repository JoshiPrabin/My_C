#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    struct student{
    char name[10];
    int roll;
    float marks;
    char add[10];
    char rem[20];
};
    struct student s[10],temp;
    int i,j,n;
    printf("enter the number of students: ");
    scanf("%d",&n);
    printf("enter the info of students:\n");
    for(i=0;i<n;i++)
        {
        s[i].roll=i+1;
        printf("\n for roll no %d\n",s[i].roll);
        printf("enter first name: ");
        scanf("%s",s[i].name);
         printf("enter marks: ");
        scanf("%f",&s[i].marks);
        printf("enter the address: ");
         scanf("%s",s[i].add);
         printf("enter your remarks on the student:\n ");
         scanf("%s",s[i].rem);
        }
   /* for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(s[i].percent<s[j].percent)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
        }
        for(i=0;i<5;++i){
            printf("%s\t%d\t%f\t%s\t\n",s[i].name,s[i].roll,s[i].percent,s[i].add);
        }*/
    for(i=0;i<n;i++){
            printf("name: %s\n",s[i].name);
            printf("marks: %.2f\n",s[i].marks);
            printf("address: %s\n",s[i].add);
            printf("remarks: \n%s\n",s[i].rem);

    }
    return 0;
}
