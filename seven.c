#include <stdio.h>

int push(int);
int pop();
int s[5], top = -1;
int main()
{
    int data;
    printf("Pushing the Integer Data\n");
    for (int i = 0;;i++)
    {
        printf("%d -", i+1);
        scanf("%d", &s[i]);
        data = push(s[i]);
        if(data == -1)
        {
            printf("The Stack is Full");
            break;
        }
        else
        {
            printf("The Pushing Data is %d", data);
        }
        printf("\n");
    }
    printf("\n\nDeleting the Data -\n");
    for (int i = 0;;i++)
    {
        data = pop();
        if(data == -1)
        {
            printf("The Stack is Empty");
            break;
        }
        else
        {
            printf("The Pop Data is %d\n", data);
        }
    }
    return 0;
}
int push(int data)
{
    if(top == 5-1)
    {
        return -1;
    }
    else
    {
        top++;
        s[top] = data;
        return data;
    }
}
int pop()
{
    int c;
    if(top == -1)
    {
        return -1;
    }
    else
    {
        c = s[top];
        top--;
        return c;
    }
}
