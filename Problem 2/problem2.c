#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("%d+%d=%d\n", x, y, sum);
    int subtraction = x - y;
    printf("%d-%d=%d\n", x, y, subtraction);
    int multiplication = x * y;
    printf("%d*%d=%d\n", x, y, multiplication);
    // float division = x * 1.0 / y;
    // printf("%d/%d=%0.2f", x, y,division);
    // .00 output hoile point jodi na chai tahle nicher condition.
    if (x % y == 0)
    {
        int division = x / y;
        printf("%d/%d=%d", x, y, division);
    }
    else
    {
        float division = x * 1.0 / y;
        printf("%d/%d=%0.2f", x, y, division);
    }
    return 0;
}