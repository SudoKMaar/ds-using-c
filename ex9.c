#include <stdio.h>
int binarySearch(int arr[], int l, int r, int number)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == number)
            return mid;
        if (arr[mid] > number)
            return binarySearch(arr, l, mid - 1, number);
        return binarySearch(arr, mid + 1, r, number);
    }
    return -1;
}
int main()
{
    printf("How many elements do you want to enter in the array: ");
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements in the sorted form: \n");
    for(int i = 0;i < size;i++)
        scanf("%d", &arr[i]);
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the elements that you want to search: ");
    int number;
    scanf("%d", &number);
    int result = binarySearch(arr, 0, n - 1, number);
    if (result == -1)
        printf("Element is not present in array!!!");
    else
        printf("Element is present at index %d or at position %d", result, result+1);
    return 0;
}