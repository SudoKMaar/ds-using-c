#include <stdio.h>

int enqueue(int);
int dequeue();
int rear = -1, front = -1, s[5];
int main()
{
    int data;
    printf("Push the Integer Data\n");
    for (int i = 0;;i++)
    {
        printf("%d -", i+1);
        scanf("%d", &s[i]);
        data = enqueue(s[i]);
        if(data == -1)
        {
            printf("The Queue is Full");
            break;
        }
        else
        {
            printf("The Entering Data is %d", data);
        }
        printf("\n");
    }
    printf("\n\nDeleting the Data\n");
    for (int i = 0;;i++)
    {
        data = dequeue();
        if(data == -1)
        {
            printf("The Queue is Empty");
            break;
        }
        else
        {
            printf("The Deleting Data is %d\n", data);
        }
    }
}
int enqueue(int data)
{
    if (rear == 5 - 1)
    {
        return -1;
    }
    else
    {
        rear++;
        if(rear == 0)
        {
            front++;
        }
        s[rear] = data;
        return data;
    }
}
int dequeue()
{
    int data;
    if(front > rear)
    {
        return -1;
    }
    else
    {
        data = s[front];
        front++;
        return data;
    }
}
