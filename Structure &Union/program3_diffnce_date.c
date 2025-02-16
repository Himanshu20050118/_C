#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}da;
da difference(da c1,da c2);
int isleapyear(int year);
int daysinmonth(int month,int year);
int datetodays(da x);
int main(){
    da c1,c2,c3;
    printf("Enter first date:");
    scanf("%d %d %d",&c1.date,&c1.month,&c1.year);
    printf("Enter second date:");
    scanf("%d %d %d",&c2.date,&c2.month,&c2.year);
    c3=difference(c1,c2);
    printf("difference in the date is %d",c3.date);
    return 0;
}
int isleapyear(int year){
    if((year%4==0&&year%100!=0)||year%400==0)
     return 1;
    else 
    return 0;
}
int daysinmonth(int month,int year){
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(month==2)
     return isleapyear(year)?29:28;
    else
     return days[month-1];
}
int datetodays(da x){
    int tday=0,i;
    for(i=1;i<x.year;i++)
      tday+=isleapyear(i)?366:365;
    for(i=1;i<x.month;i++)
      tday+=daysinmonth(i,x.year);
    tday+=x.date;
    return tday;
}
da difference(da c1,da c2){
   da diff;
    int days1,days2;
    days1=datetodays(c1);
    days2=datetodays(c2);
    diff.date=days2-days1;
    return diff;
}