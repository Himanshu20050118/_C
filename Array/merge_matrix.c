#include<stdio.h>
int main(){
    int A1[8],A2[8],A3[16],i,j,k;
    printf("Enter elements of matrix A1:");
    for(i=0;i<8;i++)
     scanf("%d",&A1[i]);
    printf("Enter elements of matrix A2:");
    for(i=0;i<8;i++)
     scanf("%d",&A2[i]);
    for(i=0;i<8;i++)
    { for(j=i+1;j<8;j++)
      { if(A1[i]>=A1[j])
         { A1[i]=A1[i]+A1[j];
           A1[j]=A1[i]-A1[j];
           A1[i]=A1[i]-A1[j];
         }
      }
    }
    printf("After merging array A1:");
    for(i=0;i<8;i++)
     printf("%d ",A1[i]);
     //A2
    for(i=0;i<8;i++)
    { for(j=i+1;j<8;j++)
      { if(A2[i]>=A1[j])
         { A2[i]=A2[i]+A2[j];
           A2[j]=A2[i]-A2[j];
           A2[i]=A2[i]-A2[j];
         }
      }
    }
    printf("\nAfter merging array A2:");
    for(i=0;i<8;i++)
     printf("%d ",A2[i]);
    i=0,j=0,k=0;
    while(i<8&&j<8)
    {if(A1[i]<A2[j])
       {A3[k]=A1[i];
         k++;
         i++;
       }
     else
     { A3[k]=A2[j];
        j++;
        k++;
     }
    }
    while(i<8)
    { A3[k]=A1[i];
      i++;
      k++;}
    while(j<8)
    { A3[k]=A2[j];
      j++;
      k++;}
    printf("\nAfter merging:");
    for(i=0;i<16;i++)
     printf("%d ",A3[i]);
    return 0;
}