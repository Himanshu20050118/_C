// WAP to input names, employee Ids and salaries of 5 employees of an organisation and display this data in tabular format
#include <stdio.h>
#include <string.h>
void main()
{
    char names[5][20];
    int i, empid[5], salary[5];
    printf("Enter names of five employess\n");
    for (i = 0; i < 5; i++)
    {
        fgets(names[i], 20, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    printf("Enter empids of five employess\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &empid[i]);
    printf("Enter salaries of five employess\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &salary[i]);
    printf("Employee Data is: \n");
    for (i = 0; i < 5; i++)
    {
        // puts(names[i]);
        printf("%10s%10d%10d\n", names[i], empid[i], salary[i]);
    }
}