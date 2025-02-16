#include<stdio.h>
//#include<conio.h>
#include<string.h>
char* id(int day,int mon,int year,char *firnam,char *lasnam);
char sum(int n){
   int i=n,b=0;
   while(i!=0)
    { b+=i%10;
     i=i/10;}
   if(b>=10)
     return sum(b);
   else{
    switch (b){
     case1:
       return '1';
     case2:
       return '2';
     case3:
       return '3';
     case4:
       return '4';
     case5:
       return '5';
     case6:
       return '6';
     case7:
       return '7';
     case8:
       return '8';
     case9:
       return '9';
     }
}
}
char* id(int day,int mon,int year,char *firnam,char *lasnam){
    char *id;
    id[0]=strupr(firnam[0]);
    id[1]=strupr(lasnam[0]);
    id[2]='-';
    id[3]=sum(day);
    id[4]=sum(mon);
    id[5]=sum(year);
    id[6]='\0';
    return id;
}
int main(){
  char *firnam,*lasnam;
  int day,mon,year;
  printf("Enter your date of birth(day month year):");
  scanf("%d %d %d",&day,&mon,&year);
  while(getchar()!='\n');
  printf("Enter first name:");
  gets(firnam);
  while(getchar()!='\n');
  printf("Enter your last name:");
  gets(lasnam);
  printf("Your user id is %s",id(day,mon,year,firnam,lasnam));
  //getch();
  return 0;
}