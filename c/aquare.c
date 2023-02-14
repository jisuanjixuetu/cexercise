#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    long sum;
    for (int i = 1; i <= number; i++)
    {
        sum += i * i;
    }
    printf("%ld\n", sum);
    return 0;
}