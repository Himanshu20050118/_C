#include<stdio.h>
void printborder(char *a){
   printf("    |    |   \n");
   printf("  %c |  %c |  %c \n",a[0],a[1],a[2]);
   printf("||\n");
   printf("    |    |   \n");
   printf("  %c |  %c |  %c \n",a[3],a[4],a[5]);
   printf("||\n");
   printf("    |    |   \n");
   printf("  %c |  %c |  %c \n",a[6],a[7],a[8]);
   printf("    |    |    \n");
}
void main(){
    char game[]={'1','2','3','4','5','6','7','8','9'};
    int i=1,x;
    printborder(game);
    while(!((game[0]==game[1]&&game[1]==game[2])||(game[3]==game[4]&&game[4]==game[5])||(game[6]==game[7]&&game[7]==game[8])||(game[0]==game[4]&&game[4]==game[8])||(game[2]==game[4]&&game[4]==game[6])||(game[0]==game[3]&&game[3]==game[6])||(game[1]==game[4]&&game[4]==game[7])||(game[2]==game[5]&&game[5]==game[8]))){
        do{
          printf("Enter position(1-9)for %c:",i==1?'X':'0');
          scanf("%d",&x);
        }while(x<1||x>9);
        if(i==1)
        { game[x-1]='X';
          i=0;
          printborder(game);
        }
        else{
            game[x-1]='0';
            i=1;
            printborder(game);
        }
    }
    if(i==1)
      printf("\nSecond is winner");
    else
      printf("\nfirst is winner");
}