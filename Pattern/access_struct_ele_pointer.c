#include<stdio.h>
struct std{
    char name[20];
    int roll;
    int age;
};
int main(){
    struct std student1;
    student1.roll=219;
    student1.age=18;
    struct std *ptr;
    ptr=&student1;
    fgets(student1.name,20,stdin);
    printf("student1.name=%s",ptr->name);
    printf("student1.roll=%d\n",ptr->roll);
    printf("student1.age=%d\n",ptr->age);
    return 0;
}