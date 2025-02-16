#include <stdio.h>
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("(Inside function)After swap:a=%d b=%d\n", a, b);
}
int main() {
    int x, y;
    printf("OUTPUT:\n");
    printf("Enter two numbers:");
    scanf("%d %d", &x, &y);
    printf("Before swap:x=%d y=%d\n", x, y);
    swap(x, y);
    printf("After swap function call:x=%d y=%d\n", x, y);
    return 0;
}