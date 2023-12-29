#include <stdio.h>

struct Emp 
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

void main() 
{
    int nEmp,i;
    printf("Enter the number of employees: ");
    scanf("%d", &nEmp);

    struct Emp emp[nEmp];

    for (i = 0; i < nEmp; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Name: ");
        scanf(" %[^\n]s", emp[i].emp_name);
        printf("Age: ");
        scanf("%d", &emp[i].emp_age);
        printf("Role: ");
        scanf(" %[^\n]s", emp[i].emp_role);
        printf("City: ");
        scanf(" %[^\n]s", emp[i].emp_city);
        printf("Experience (in years): ");
        scanf("%d", &emp[i].emp_experience);
        printf("Company Name: ");
        scanf(" %[^\n]s", emp[i].emp_company_name);
    }

    printf("\nEmployee Records:\n");
    for (i = 0; i < nEmp; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", emp[i].emp_id);
        printf("Name: %s\n", emp[i].emp_name);
        printf("Age: %d\n", emp[i].emp_age);
        printf("Role: %s\n", emp[i].emp_role);
        printf("City: %s\n", emp[i].emp_city);
        printf("Experience (in years): %d\n", emp[i].emp_experience);
        printf("Company Name: %s\n", emp[i].emp_company_name);
    }

}
