#include <stdio.h>
#include <stdlib.h>

int main()
    {
         struct date
         {
             int day;
             int month;
             int year;
         };
        struct employee
        {
             char name[20];
             int id;
             struct date dob;
             float salary;
        } emp;
        printf("Name of employee: \t");
        scanf("%s",emp.name);
        printf("\n Id of employee: \t");
        scanf("%d",&emp.id);
        printf("\n Day of birth: \t");
        scanf("%d",&emp.dob.day);
        printf("\n month of birth: \t");
        scanf("%d",&emp.dob.month);
        printf("\n Year of birth: \t");
        scanf("%d",&emp.dob.year);
        printf("\n Salary of emplyoee: \t");
        scanf("%f",&emp.salary);


        printf("\n\n The detail info of an employee");
        printf("\n Name \t id \t day\t month\t year \t salary");
        printf("\n_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
        printf("%s\t%d\t%d\t%d\t%d\t%.2f",emp.name,emp.id,emp.dob.day,emp.dob.month,emp.dob.year,emp.salary);
    //printf("Hello world!\n");
    return 0;
}
