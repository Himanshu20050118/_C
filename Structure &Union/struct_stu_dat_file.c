#include<stdio.h>
typedef struct detail{
    char name[20];
    int roll;
    char branch[20];
}std;
void main(){
    std student[5];
    FILE *fp;
    fp=fopen("C:\\Users\\Nitin\\Desktop\\c+\\file1.txt","w");
    int i;
    printf("Enter detail of 5 students\n");
    for(i=0;i<2;i++)
    { printf("Enter name of student %d:",i+1); 
      scanf("%s",&student[i].name);
      printf("Enter roll no. of student %d:",i+1); 
      scanf("%d",&student[i].roll);
      printf("Enter branch of student %d:",i+1); 
      scanf("%s",&student[i].branch);
    }
    fprintf(fp,"NAME\t\t roll no. \tbranch\t");
    fprintf(fp,"\n--------------------------------------------");
    printf("NAME\t\t roll no. \tbranch\t");
    printf("\n--------------------------------------------");
    for(i=0;i<2;i++)
    { fprintf(fp,"\n%-20s %-8d %-20s",student[i].name,student[i].roll,student[i].branch);
      printf("\n%-20s %-8d %-20s",student[i].name,student[i].roll,student[i].branch);
    }
}