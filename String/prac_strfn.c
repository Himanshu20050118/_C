#include<stdio.h>
#include<string.h>
int main(){
   char s1[]="Hello", s2[100];
   strcpy(s2,s1);
   puts(s2);
   strrev(s2);
   printf("%s",(s2));
//    printf("\n%s",strrev(s2));
//    printf("\n%s",s2);
   printf("\n%s",strcat(s2,s1));
   printf("\n%s",strupr(s1));
   printf("\n%s",strlwr(s1));
   printf("\n%s",strncat(s1,s2,2));




    return 0;
}