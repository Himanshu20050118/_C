#include <stdio.h>
typedef struct comp
{
    float real;
    float img;
} complex;
complex add(complex, complex);
int main()
{
    complex c1, c2, c3;
    printf("Enter real and imaginary part of the first member: ");
    scanf("%f %f", &c1.real, &c1.img);
    printf("Enter real and imaginary part of the second member: ");
    scanf("%f %f", &c2.real, &c2.img);
    c3 = add(c1, c2);
    printf("Result is:\n%.2f", c3.real);
    if (c3.img < 0)
        printf("-%.2fi", c3.img);
    else if (c3.img > 0)
        printf("+%.2fi", c3.img);
    else
        printf(" ");
    return 0;
}
complex add(complex a, complex b)
{
    complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}