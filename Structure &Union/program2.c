//WAp to create a structure named employ having data members employ id (emp id ),employ department ,salary ask user to enter data for 5 employees ans save this data in file employ.txt separately add one more statement in the employ.txt file having names of employees with slary greater than 50000. 

#include<stdio.h>
#include<string.h>
#include<conio.h>
typedef struct employee{
   char *name;
   int salary;
   char *department;
} std;
void main(){
    std emp[5];
    FILE *fp;
    int i;
    clrscr();
    fp=fopen("C:/Users/Nitin/Desktop/c+/file2.txt","w");
    printf("Enter data of 5 employees:\n");
    for(i=0;i<5;i++)
    { printf("Enter name of employee %d:",i+1);
      gets(emp[i].name);
      printf("Enter salary of employee %d:",i+1);
      scanf("%d",&emp[i].salary);
      printf("Enter department of employee %d:",i+1);
      fflush(stdin);
      gets(emp[i].department);
    }

    printf("\n\tName \tdepartment \tsalary\n");
    printf("--------------------------------------\n");
    fprintf(fp,"\n\tName \tdepartment \tsalary\n");
    fprintf(fp,"-------------------------------------\n");
    for(i=0;i<5;i++){
      printf("%12s %13s %10d\n",emp[i].name,emp[i].department,emp[i].salary);
      fprintf(fp,"%12s %13s %10d\n",emp[i].name,emp[i].department,emp[i].salary);
    }
    for(i=0;i<5;i++)
    { free(emp[i].name);
      free(emp[i].department);
    }
    fclose(fp);
    getch();
}