#include<stdio.h>
int main(){
    int x[10][10]={0},y[10][10]={0},z[10][10]={0};
    int i,j,r,c;
    printf("Enter number of rows and coulmns: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    { for(j=0;j<c;j++)
      { printf("Enter element at x:(%d%d)",i,j);
        scanf("%d",&x[i][j]);}
      printf("\n");
    }
    for(i=0;i<r;i++)
    { for(j=0;j<c;j++)
      { printf("Enter element at y:(%d%d)",i,j);
        scanf("%d",&y[i][j]);}
      printf("\n");
    }
    for(i=0;i<r;i++)
    { for(j=0;j<c;j++)
     z[i][j]=x[i][j]+y[i][j];
    }
    for(i=0;i<r;i++)
    {for(j=0;j<c;j++)
    printf("%d ",z[i][j]);
    printf("\n");
    }
     return 0;
}