#include <stdio.h>

int main()
{
    int arrayOne[2][3] = {{1, 2, 3}, {4, 5, 6}}, arrayTranspose[3][2];
    printf("Original Matrix is -\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            printf("  %d\t", arrayOne[i][j]);
        }
        printf("\n");
    }
    printf("After Transposing the Matrix -\n");
    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 3;j++)
        {
            arrayTranspose[j][i] = arrayOne[i][j];
        }
    }
    for (int i = 0;i<3;i++)
    {
        for (int j = 0;j<2;j++)
        {
            printf("  %d\t", arrayTranspose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
