#include<stdio.h>

/*
8 7 6 5 4 3 2 1
8 7 6 5 4 3 2
8 7 6 5 4 3 
8 7 6 5 4 
8 7 6 5 
8 7 6 
8 7 
8 
*/

int main(){
    for (int i = 1; i < 9 ; i++) {
        for (int j = 8; j >= i ; j--)
            printf("%d ", j);
        printf("\n");
        
    }
    
    return 0;
}