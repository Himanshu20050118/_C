#include<stdio.h>
int main(){
    int i,j,ele,pos,n,a[30];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements  of the array one by one");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to insert: ");
    scanf("%d", &ele);
    printf("Enter the index value where you want to insert: ");
    scanf("%d", &pos);
    for (j = n; j >pos ; j--) {
        a[j]=a[j-1];

    }
    a[j]=ele;
    for(i=0;i<=n;i++)
    printf("%d ",a[i]);
    return 0;
}