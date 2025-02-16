#include<stdio.h>
int isleapyear(int year);
int monthinday(int mon,int year);
struct date diff(struct date y,struct date z);
int datetodays(struct date a);
struct date{
    int day;
    int month;
    int year;
};
int main(){
    struct date dh[3];
    int dif;
    printf("Enter 1st date(day month year):");
    scanf("%d %d %d",&dh[0].day,&dh[0].month,&dh[0].year);
    printf("Enter 2nd date(day month year):");
    scanf("%d %d %d",&dh[1].day,&dh[1].month,&dh[1].year);
    dh[2]=diff(dh[0],dh[1]);
    printf("The difference of date is %d.",dh[2].day);
    return 0;
}
int isleapyear(int year){
    return ((year%4==0&&year%100!=0)||year%400==0);
}
int monthinday(int mon,int year){
    if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
      return 31;
    else if(mon==2)
    { if(isleapyear(year)==1)
        return 29;
      return 28;
    }
    else if(mon==4||mon==6||mon==9||mon==11)
      return 30;
}
int datetodays(struct date a){
    int b=a.day,j;
    for(int i=1;i<a.month;i++)
      b+=monthinday(i,a.year);
    for(j=1;j<a.year;j++)
      b+=isleapyear(j)?366:365;
    return b;
}
struct date diff(struct date y,struct date z){
    int c1,c2;
    struct date c3;
    c1=datetodays(y);
    c2=datetodays(z);
    c3.day=c2>c1?c2-c1:c1-c2;
    return c3;
}