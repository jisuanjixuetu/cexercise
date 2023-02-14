#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int num[100000];
    num[count++] = n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            num[count++] = n;
        }
        else
        {
            n = 3 * n + 1;
            num[count++] = n;
        }
    }
    for (int i = 0; i < count - 1; i++)
    {
        printf("%d", num[i]);
        printf(" ");
    }
    printf("%d", num[count - 1]);
    printf("\n");
    return 0;
}