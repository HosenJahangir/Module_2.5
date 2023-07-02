#include <stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("%d+%d=%d\n", x, y, sum);
    // scanf("%d %d", &x, &y);

    int subtraction = x - y;
    printf("%d-%d=%d\n", x, y, subtraction);

    int multiply = x * y;
    printf("%d*%d=%d\n", x, y, multiply);

    float dvd = x * 1.0 / y;
    printf("%d/%d=%0.2f", x, y, dvd);
}