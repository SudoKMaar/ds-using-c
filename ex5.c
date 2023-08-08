#include <stdio.h>
int main()
{
    int arr1[2][2] = {{11, 44}, {21, 31}}, arr2[2][2] = {{59, 47}, {14, 15}};
    printf("First Matrix is:\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix is:\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("Subtraction of Two Matrices is:\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arr2[i][j] - arr1[i][j]);
        }
        printf("\n");
    }
    printf("Addition of Two Matrices is:\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 2;j++)
        {
            printf("  %d\t", arr2[i][j] + arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
