#include<stdio.h>
typedef struct employee{
    char name[20];
    int salary;
}emp;
int main(){
    int n,i,j=0;
    printf("Enter number of employees:");
    scanf("%d",&n);
    emp employee[n];
    printf("enter details of %d employees\n",n);
    for(i=0;i<n;i++)
    {printf("Enter name of %d employee:",i+1);
     getchar();
     j=0;
     fgets(employee[i].name,20,stdin);
     while(employee[i].name[j]!='\0')
     { if(employee[i].name[j]=='\n')
          employee[i].name[j]='\0';
       j++;
     }
     printf("Enter salary of %d emmployee:",i+1);
     scanf("%d",&employee[i].salary);
    }
    printf("\n\temployees information\n");
    printf("--------------------------------");
    printf("\n\tname\t\t\t\t salary\n");
    for(i=0;i<n;i++)
       printf("\t%-20s %-7d\n",employee[i].name,employee[i].salary);
    return 0;
}