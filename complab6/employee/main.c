#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct employee{
        char empname[10];
        int age;
        float salary;
    }emp[5],emp1[5];
        FILE *fptr;
    fptr=fopen("employee.txt","w");
    if(fptr=NULL){
        printf("error!");
        exit(0);
    }

    for(int i=0;i<5;i++){
        printf("enter the name of the employee: ");
        scanf("%s",emp[i].empname);
        printf("enter the age of the employee: ");
        scanf("%d",&emp[i].age);
        printf("enter the salary of the employee: ");
        scanf("%f",&emp[i].salary);

    }
    fwrite(&emp, sizeof(emp), 1, fptr);


    fread(&emp1, sizeof(emp1), 1, fptr);
    printf("\n name\t age\t salary\n");
    for(int i=0;i<5;i++){
        printf("%s\t%d\t%f%n",emp1[i].empname,emp[i].age,emp[i].salary);
    }
    fclose(fptr);


       // printf("Hello world!\n");
    return 0;
}
