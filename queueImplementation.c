#include <stdio.h>
#define MAX_SIZE 10
int front = -1, rear = -1;
int queue[MAX_SIZE];

int insertElement()
{
    // check queue is overflow or not
    int n;
    if (rear == MAX_SIZE - 1)
    {
        printf("queue is overflow");
        return 0;
    }
    else
    {
        front = 0;
        rear = rear+1;
        printf("enter a element to add in queue: \n");
        scanf("%d", &n);
        queue[rear] = n;
        printf("%d element added successfully.", n);
    }
}
int deleteElement()
{
    // check queue is empty or not
    if (front == -1 && front > rear)
    {
        printf("queue is empty.!!");
        return 0;
    }
    else
    {
        int n = queue[front];
        front = front + 1;
        printf("%d element deleted from queue successfully.!!", n);
    }
}
int displayElement()
{
    // check queue is empty or not
    if (front == -1 && front > rear)
    {
        printf("queue is empty.");
        return 0;
    }
    else
    {
        for (int i = rear; i >= front; i--)
        {
            printf("elements :  %d\n",queue[i]);
        }
    }
}

int main()
{
    int choice;
    do
    {
        printf("************* stack implementation*******************\n");
        printf("choose 1 to add element :\n");
        printf("choose 2 to delete element :\n");
        printf("choose 3 to display element :\n");
        printf("choose 4  to exit\n");
        printf("enter your request: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertElement();
            break;
        case 2:
            deleteElement();
            break;
        case 3:
            displayElement();
            break;

        default:
            printf("invalid operation");
        }

    } while (choice != 4);

    return 0;
}

// maxsize = 9
//  1 2 3 4 -> front
//  rear