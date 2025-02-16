#include<stdio.h>
int number(int);
int number(int x){
	int i;
	if(x<2)
	  return -1;
	else if(x==2)
	  return 1;
	else
	{ for(i=2;i<=x/2;i++)
      { if(x%i==0)
	     return -1;
	  }
      return 1;
    }
}
int main(){
	int j;
	for(j=2;j<100;j++)
	{ if(number(j)==1)
	    printf("%d ",j);}
	return 0;
}