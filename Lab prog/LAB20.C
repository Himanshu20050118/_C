/*WAP to dislpay the following:
 A2 B4 C6 D8 E2 F4 G6 H8 I2 J4 K6 L8 M2 N4 O6 P8 Q2 R4 S6 T8 U2 V4 W6
 X8 Y2 Z4 */
#include <stdio.h>
int main()
{
    char j = 65;
    int i = 2;
    for (j = 65; j <= 90; j++)
    {
        printf("%c%d ", j, i);
        i += 2;
        if (i == 10)
            i = 2;
    }
    return 0;
}
