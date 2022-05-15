#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct {
    char name[10];
    char add[10];
    float salary;
    int id;
    }emp[5],t;
    int i,j;
    for(i=0;i<5;i++){
            printf("enter the info of %d employee\n",i+1);
        printf("enter the name of the employee: ");
        scanf("%s",emp[i].name);
        printf("enter the address: ");
        scanf("%s",emp[i].add);
        printf("enter the salary: ");
        scanf("%f",&emp[i].salary);
        printf("enter id: ");
        scanf("%d",&emp[i].id);
    }

        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(emp[i].salary<emp[j+1].salary){
                    t=emp[i];
                    emp[i]=emp[j+1];
                    emp[j+1]=t;

                }
            }
        }
         for(i=0;i<3;i++){
                        printf("name: %s\n",emp[i].name);
                        printf("address: %s\n",emp[i].add);
                        printf("salary: %f\n",emp[i].salary);
                        printf("id: %d\n",emp[i].id);
                    }

   // printf("Hello world!\n");
    return 0;
}
