// nested structure
#include <stdio.h>
struct Branch
{
    char branch1[20];
    char branch2[20];
};
struct detail
{
    char name[20];
    int roll;
    struct Branch branch;
};
int main()
{
    struct detail student = {"ram", 69, {"cse", "aiml"}};
    printf("Name of student is %s\n", student.name);
    printf("roll no. of student is %d\n", student.roll);
    printf("option of department are: %s or %s ", student.branch.branch1, student.branch.branch2);
    return 0;
}