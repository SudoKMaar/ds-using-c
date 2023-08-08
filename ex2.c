#include <stdio.h>
int main()
{
    printf("Enter the Five Elements: ");
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to search the element in this array: ");
    int num, found = 0;
    scanf("%d", &num);
    for (int i = 0;i < 5; i++)
    {
        if (a[i] == num)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element Found");
    else
        printf("Element not Found");
    return 0;
}