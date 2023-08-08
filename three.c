#include <stdio.h>

int fact(int n)
{
    if (n <= 1)
        return n;
    else
        return n * fact(n-1);
}

int main()
{
    printf("Enter the number find the factorial -");
    int number;
    scanf("%d", &number);
    printf("The Factorial is %d", fact(number));
    return 0;
}
