#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the five elements: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}