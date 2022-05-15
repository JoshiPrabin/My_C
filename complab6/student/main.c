#include <stdio.h>
#include <stdlib.h>

int main()
{
     struct student{
        char name[10];
        int roll;
        float marks;
    }stu[3],stu1[3];
        FILE *fptr;
    fptr=fopen("student.txt","w");
    if(fptr=NULL){
        printf("error!");
        exit(0);
    }

    for(int i=0;i<3;i++){
        printf("enter the name of the student: ");
        scanf("%s",stu[i].name);
        printf("enter the roll no of the student: ");
        scanf("%d",&stu[i].roll);
        printf("enter the marks of the student: ");
        scanf("%f",&stu[i].marks);

    }
    fwrite(&stu, sizeof(stu), 1, fptr);


    fread(&stu1, sizeof(stu1), 1, fptr);
    printf("\n name\t roll_no\t marks\n");
    for(int i=0;i<5;i++){
        printf("%s\t%d\t%f%n",stu1[i].name,stu1[i].roll,stu1[i].marks);
    }
    fclose(fptr);

    return 0;
}
