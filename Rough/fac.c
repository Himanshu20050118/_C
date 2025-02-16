//factorial of number
#include<stdio.h>
int main(){
    long long int  n,f,original_n;
    printf("Enter value: ");
    scanf("%lld",&n);
    original_n=n;
    if(n==0||n==1){
        printf("factorial of %d is 1",n);
    }
    else{
      f=1;
      for(int i=n;i>1;i--){
          f=f*i;
      }
      printf("the factorial of %d is %lld ",original_n,f);
    }
    return 0;
}