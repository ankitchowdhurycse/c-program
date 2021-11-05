#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX];
int top = -1;

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(int item)
{
    if (isFull())
    {
        printf("Stack Overflow!\n");
        return;
    }
    top += 1;
    stack[top] = item;
}

int pop()
{
    if (isEmpty())
        printf("Stack Underflow!\n");
    int item = stack[top];
    top -= 1;
    return item;
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("| ");
    for (int i = top; i >= 0; i--)
        printf("%d | ", stack[i]);
    printf("\n");
}

int main()
{
    int item, choice;
    while (1)
    {
        printf("1. Push element\n");
        printf("2. Pop element\n");
        printf("3. View all elements\n");
        printf("4. Exit program\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &item);
            push(item);
            break;

        case 2:
            item = pop();
            printf("%d was popped from stack.\n", item);
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