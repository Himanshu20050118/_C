#include<stdio.h>
int main(){
    int day,month,year;
    printf("Enter date (day/month/year) :");
    scanf("%d %d %d",&day,&month,&year);
    printf("Entered date is %d/%d/%d\n",day,month,year);
  if(day<1||day>31||month<1||month>12||year<1){
        printf("%d/%d/%d is an invalid date\n",day,month,year);
    }
  else if(month==4||month==6||month==9||month==11)
   {if(day>30)
    printf("%d/%d/%d is an invalid date\n",day,month,year);
    else
    printf("%d/%d/%d is a valid date\n",day,month,year);
   }
  else if(month==2)
   { if((year%4==0&&year%100!=0)||year%400==0)
      {if(day>29)
      printf("%d/%d/%d is an invalid date\n",day,month,year);
      else
      printf("%d/%d/%d is a valid date\n",day,month,year);
     }
     else if(day>28)
       printf("%d/%d/%d is an invalid date\n",day,month,year);
     else
    printf("%d/%d/%d is a valid date\n",day,month,year);
   }
   else
   printf("%d/%d/%d is a valid date\n",day,month,year);
   return 0;
}