#include<stdio.h>
int isPrime(int a){
    int i;
    for(i=2;i<=a/2;i++)
    { if(a%i==0)
       return 0;}
    return 1;
}
int main(){
    int prime[10],count=0,num=23;
    while(count<10)
    { if(isPrime(num)==1)
      { prime[count]=num;
        count++;}
      num++;
    }
    printf("10 prime number from 23 are:");
    for(int i=0;i<10;i++)
      printf("%d ",prime[i]);
    return 0;
}