//using function insert and delete element in array
#include<stdio.h>
int* delete(int arr[5],int n);
int* insert(int arr[5],int n,int index);
int* delete(int arr[5],int n){
    int i,j;
    for(i=0;i<5;i++)
    { if(arr[i]==n)
       break;
    }
    if(i<5)
    { for(j=i;j<5;j++)
        arr[j]=arr[j+1];
    }
    else{
       printf("number not found\n");
    }
    return arr;
}
int* insert(int arr[5],int n,int index){
    int i,j,k;
    for(i=5;i>index;i--)
     arr[i]=arr[i-1];
    arr[index]=n;
    return arr;
}
int main(){
    int n,i,ind,x[6]={1,2,3,5,6};
    printf("enter number to be deleted:");
    scanf("%d",&n);
    delete(x,n);
    printf("Array after deleting %d is:",n);
    for(i=0;i<5;i++)
     printf("%d ",x[i]);
    
    printf("\nEnter number and index to be insert:");
    scanf("%d %d",&n,&ind);
    insert(x,n,ind);
    for(i=0;i<6;i++)
     printf("%d ",x[i]);
    return 0;
}