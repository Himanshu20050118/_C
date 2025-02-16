// #include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[5][100],x[100];
//     int i,j,n;
//     printf("Enter number of strings:");
//     scanf("%d",&n);
//     getchar();
//     printf("Enter %d strings:\n");                  //error may be implement to check correct one
//     for(i=0;i<n;i++)
//      scanf("%s",arr[i]);
//     for(i=0;i<n;i++)
//     { for(j=i+1;j<n;j++)
//       { if(arr[i][0]>arr[j][0])
//          { strcpy(x,arr[i]);
//            strcpy(arr[i],arr[j]);
//            strcpy(arr[j],x);
//          }
//       }
//     }
     
//     printf("after sorting:\n");
//     for(i=0;i<n;i++)
//       printf("%s\n",arr[i]);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char arr[5][100],x[100];
    int i,j,n;
    printf("Enter number of strings:");
    scanf("%d",&n);
    getchar();
    printf("Enter %d strings:\n");
    for(i=0;i<n;i++)
    { fgets(arr[i],100,stdin);
      for(j=0;j<100;j++)
       { if(arr[i][j]=='\n')
         { arr[i][j]='\0';
           break;}
       }
    }
    for(i=0;i<n;i++)
    { for(j=i+1;j<n;j++)
      { if(arr[i][0]>arr[j][0])
         { strcpy(x,arr[i]);
           strcpy(arr[i],arr[j]);
           strcpy(arr[j],x);
         }
      }
    }
     
    printf("after sorting:\n");
    for(i=0;i<n;i++)
      printf("%s\n",arr[i]);
    return 0;
}