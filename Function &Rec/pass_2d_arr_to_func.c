#include<stdio.h>
void Function(int c[2][2]);
int main(){
int c[2][2],i,j;
printf("Enter 4 numbers:\n");
for(i=0;i<2;++i)
for(j=0;j<2;++j){
scanf("%d",&c[i][j]); }
Function(c); /* passing multi-dimensional array to function */
return 0;
}
void Function(int c[2][2])
{
/* Instead to above line, void Function(int c[][2]) is also valid */
int i,j;
printf("Displaying:\n");

for(i=0;i<2;++i)
for(j=0;j<2;++j)
printf("%d\n",c[i][j]);
}