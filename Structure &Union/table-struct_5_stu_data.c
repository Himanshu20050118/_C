#include <stdio.h>
#include <string.h>
typedef struct students
{
    char name[20];
    int Rollno;
    float marks;

} std;

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    std s[n];
    printf("Enter data for %d students:",n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of student:%d\n", i + 1);
        // gets(s[i].name);
        scanf("%s", &s[i].name);
        printf("Enter the Roll number of student:%d\n", i + 1);
        scanf("%d", &s[i].Rollno);
        printf("Enter the marks of students:%d\n", i + 1);
        scanf("%f", &s[i].marks);
    }
    printf("Name\t\tRollno\t\tMarks\n");
    printf("-------------------------------------");
    for (int j = 0; j < n; j++)
    {
        printf("\n%s\t\t%6d\t\t%.2f", s[j].name, s[j].Rollno, s[j].marks);
    }
    return 0;
}