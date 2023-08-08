#include <stdio.h>

int main()
{
    int arrayOne[2][2] = {{1, 2}, {3, 4}}, arrayTwo[2][2] = {{1, 2}, {3, 4}};
    printf("First Matrix is -\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arrayOne[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix is -\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arrayTwo[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of Two Matrices is -\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arrayTwo[i][j] - arrayOne[i][j]);
        }
        printf("\n");
    }
    printf("Addition of Two Matrices is -\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arrayTwo[i][j] + arrayOne[i][j]);
        }
        printf("\n");
    }
    return 0;
}
