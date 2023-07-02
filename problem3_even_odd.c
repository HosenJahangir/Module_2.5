#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    // even
    {
        printf("even");
    }
    else
    // odd
    {
        printf("odd");
    }
    return 0;
}