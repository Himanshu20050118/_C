#include<stdio.h>
int HCF(int a, int b) {
    int temp;
    while(b!=0){
        temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}
int LCM(int a, int b){
    return (a*b)/HCF(a,b);
}
int main() {
    int n1,n2;
    char choice;
    do {
      printf("Enter two numbers:");
      scanf("%d %d",&n1,&n2);
      printf("What do you want hcf or lcm (choose h or l):");
      scanf(" %c", &choice); 
      if(choice=='h') {
        printf("HCF of %d and %d is %d\n", n1, n2, HCF(n1,n2));}
      else if(choice=='l'||choice=='L') {
        printf("LCM of %d and %d is: %d\n", n1, n2, LCM(n1, n2));}
      else{
        printf("Invalid choice! Please choose 'h' or 'l'.\n");}
      printf("Do you want to continue (y/n): ");
      scanf(" %c",&choice);
    }while(choice=='y'||choice=='Y');
    return 0;
}