//WAP to input birthdate of the user, his first name and last name ,using this input create his credentials to login to an application for user id create a string whose letter is the first letter of name but in uppercase, second letter of user id must be first letter of last name in uppercase, third letter of his id must be underscore , next letter be a number which is sum of digits of birthyear,fifth element is sum of digit of month and last character in id is sum of digits of birthdate,password must be same as user name but in lower case.

#include<stdio.h>
#include<string.h>
char* id1(int day,int mon,int year,char *firnam,char *lasnam){
    int sumday=0,summon=0,sumyear=0,i;
    char *id1;
    id1[1]=strupr(firnam[1]);
    id1[2]=strupr(lasnam[1]);
    id1[3]='_';
    for(i=day;i>=0;i++)
     { sumday+=i%10;
      i=i/10;}
    for(i=mon;i>=0;i++)
     { summon+=i%10;
      i=i/10;}
    for(i=year;i>=0;i++)
     { sumyear+=i%10;
      i=i/10;}
    id1[4]=sumyear;
    id1[5]=summon;
    id1[6]=sumday;
    id1[7]='\0';
    return id1;
}
int main(){
    int day,mon,year;
    char *firnam,*lasnam;
    printf("Enter date of birth:");
    scanf("%d %d %d",&day,&mon,&year);
    printf("Enter first name:");
    gets(firnam);
    printf("Enter last name:");
    gets(lasnam);
    printf("User id is %s",id1(day,mon,year,firnam,lasnam));
   return 0;
}