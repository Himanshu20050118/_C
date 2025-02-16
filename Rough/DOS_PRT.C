//WAP to print full screen any statement multiple times.
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int i;
textcolor(RED);
textbackground(WHITE);
for(i=1;i<=99;i++)
{
cprintf("   \1 HELLO WORLD \2  ");
delay(150);
}
getch();
}
