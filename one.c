#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter the Five Elements -");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
