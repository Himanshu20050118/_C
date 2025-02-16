#include <stdio.h>
/*
o o o o o o
  o o o o o o
    o o o o o o
      o o o o o o
        o o o o o o
          o o o o o o
*/
int main()
{
  int i, j, k, r, c;

  printf("Enter number of rows: ");
  scanf("%d", &r);

  printf("Enter number of col: ");
  scanf("%d", &c);

  for (i = r; i >= 1; i--)
  // for (i = 1; i <= r; i++)
  {
    for (j = 1; j <= r - i; j++)
      printf("  ");
    // printf("k");
    
      for (k = 1; k <= c; k++)
        printf("* ");
      printf("\n");
    
  }

  return 0;
}