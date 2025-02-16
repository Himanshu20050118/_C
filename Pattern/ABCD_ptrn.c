#include<stdio.h>
int main(){
    int i,j,n;
    char k=65;
    printf("Enter number of rows:");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    { for(j=1;j<=2*n-1;j++)
      { if(j<=n-i||j>=n+i)
          printf("%c ",k);
        else 
          printf("  ");
        j<n?k++:k--;
      }
     k=65;
     printf("\n");
    }
    return 0;
}