#include <stdio.h>
int push();
int pop();
int a, top = -1;
// int s[top];
void main()
{
    int data, i, s[4];
    printf("Push Data\n");
    push(3);
    push(2);
    push(25);
    printf("\nDelete Data");
    data = pop();
    printf("\nData is = %d", data);
}
int push()
{
    int s[top];
    if (top == 3)
        printf("Overflow");
    else
        top = top + 1;
    s[top] = a;
}
int pop()
{
    int c;
    if (top == -1)
        printf("\nUnderflow!!!");
    else
    {
        int s[top];
        c = s[top];
        top = top - 1;
        return 0;
    }
}