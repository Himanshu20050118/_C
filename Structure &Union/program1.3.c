#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include<stdlib.h>
char* id(int day,int mon,int year,char *firnam,char *lasnam);
char sum(int n){
   int i=n,b=0;
   while(i!=0)
    { b+=i%10;
     i=i/10;}
   if(b>=10)
     return sum(b);
   else{
    /*switch (b){
     case 1:
       return '1';
     case 2:
       return '2';
     case 3:
       return '3';
     case 4:
       return '4';
     case 5:
       return '5';
     case 6:
       return '6';
     case 7:
       return '7';
     case 8:
       return '8';
     case 9:
       return '9';
     } */
     return '0'+b;
    }
}
char* uid(int day,int mon,int year,char *firnam,char *lasnam){
    char id=(char)malloc(8*sizeof(char));
    if(firnam[0]>='a'&&firnam[0]<='z')
      id[0]=firnam[0]-32;
    else
      id[0]=firnam[0];
    if(lasnam[0]>=97&&lasnam[0]<=122)
      id[1]=lasnam[0]-32;
    else
      id[1]=lasnam[0];
    id[2]='-';
    id[3]=sum(day);
    id[4]=sum(mon);
    id[5]=sum(year);
    id[6]='\0';
    return id;
}
void main(){
  char firnam[20],lasnam[20],*id,id1[20];
  int day,mon,year,i;
  //clrscr();
  printf("Enter your date of birth(day month year):");
  scanf("%d %d %d",&day,&mon,&year);
  if(mon<1||mon>12||day>31||day<1)
  { printf("Invalid date");
    return ;
  }
  else if((mon==4||mon==6||mon==9||mon==11)&&day>30)
  { printf("Invalid date");
    return ;
  }
  else if(mon==2&&day>=29)
  { if((year%4==0&&year%100!=0)||year%400==0)
    { if(day>29)
       return ;}
    else{
    	if(day>28)
    	 return ;
	}
  }
  printf("Enter first name:");
  scanf("%s",firnam);
  printf("Enter your last name:");
  scanf("%s",lasnam);
  id=uid(day,mon,year,firnam,lasnam);
  printf("Your user id is %s\n",id);
  //getch();
  free(id);
  for(i=0;i<strlen(lasnam);i++)
  { if(lasnam[i]>=65&&lasnam[i]<=90)
      id1[i]=lasnam[i]+32;
    else
      id1[i]=lasnam[i];
  }
  printf("Your password is %s",id1);
}