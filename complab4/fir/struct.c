//WAP to read name, roll, program and marks obtained in five subjects by students until the user enters 'e' and display the student detail and marks of the student

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    struct student
    {
        char name[10];
        int roll;
        float marks;
        char pro[10];
    };
    struct student s[10], temp;
    int i, j, n = 0;
    char c;
    printf("enter the info of students:\n");
    do
    {
        s[i].roll = i + 1;
        printf("\n for roll no %d\n", s[i].roll);
        printf("enter first name: ");
        scanf("%s", s[i].name);
        for (int i = 0; i < 5; i++)
        {
            printf("enter marks in %d subject: ", i + 1);
            scanf("%f", &s[i].marks);
        }
        printf("enter the program: ");
        scanf("%s", s[i].pro);
        n = n + 1;
        printf("\n Enter(e) or quit(q): ");
        scanf("%s", &c);
    } while (c == 'e');

    for (i = 0; i < n; i++)
    {
        printf("name: %s\n", s[i].name);
        for (int i = 0; i < 5; i++)
        {
            printf("marks: %.2f\n", s[i].marks);
        }
        printf("program: %s\n", s[i].pro);
    }
    return 0;
}
