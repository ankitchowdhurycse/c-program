//Array implementation of QUEUE

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty()
{
    if (front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == MAX - 1)
        return 1;
    else
        return 0;
}

void insert(int item)
{
    if (isFull())
    {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear += 1;
    queue[rear] = item;
}

int del()
{
    int item;
    if (isEmpty())
    {
        printf("Queue Underflow!\n");
        return 0;
    }
    item = queue[front];
    front += 1;
    return item;
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("The queue is: ");
    for (i = front; i <= rear; i++)
        printf("%d\t", queue[i]);
    printf("\n");
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("WHat do you want to do?\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display Queue\n");
        printf("4. Quit program\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Element to add: ");
                scanf("%d", &item);
                insert(item);
                break;
            case 2:
                item = del();
                printf("%d was deleted from the queue.\n", item);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Invalid choice!\n");
        }
    }
}