#include<stdio.h>

int main(){
    int n,q,r,c=1,b=0;
	printf("Enter a decimal number : ");
	scanf("%d",&n);
    q=n;
    while(q!=0)
    {r=q%2;
    b=b+r*c;
    c=c*10;
    q=q/2;}
    printf("Binary equivalent of %d is %d",n,b);
return 0;
}
