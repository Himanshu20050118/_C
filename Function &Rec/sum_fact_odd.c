#include<stdio.h>
long long int fact(int);
long long int fact(int x){
    int i;
    long long int a=1;
    for(i=x;i>1;i--)
      a*=i;
    return a;
}
int main(){
    int n,j,k=3;
    long long int sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    for(j=1;j<=n;j++,k+=2)
    {  sum+=fact(k);
       printf("%d!+",k);
    }
    printf("=%lld",sum);
    return 0;
}