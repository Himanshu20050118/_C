// #include <stdio.h>
// int main()
// {
//     int i, j, a[10], count = 0;
//     printf("Enter the 10 numbers: ");
//     for (i = 0; i < 10; i++)
//         scanf("%d", &a[i]);
//     for (i = 0; i < 10; i++)
//     {
//         if (a[i] % 2 == 0)
//             count++;      
//     }
//     printf("The count of even number is %d", count);
//     count=0;
    
//     for (i = 0; i < 10; i++)
//     {
//         if (a[i] % 2 !=0 )
//             count++;
//     }
//       printf("\nThe count of odd number is %d", count);
//     return 0;
// }
#include<stdio.h>
int main(){
    int i,n,x=0,y=0;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    int a[n];
    printf("Enter values:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {if(a[i]%2==0)
      x++;
     else
      y++;}
    printf("The count of even number is %d\n",x);
    printf("The count of odd number is %d\n",y);
    return 0;
}