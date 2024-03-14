#include <stdio.h>
#define MAX_SIZE 5
int cq[MAX_SIZE];
int front = -1, rear = -1;

int insertElement()
{
    // check queue is full or not
    int n;
    if ((rear + 1) % MAX_SIZE == front)
    {
        printf("queue is overflow.!!");
        return 0;
    }
    else
    {
        printf("enter a number: ");
        scanf("%d", &n);
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = rear + 1;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
            cq[rear] = n;
            printf("%d element added successfully.!!", n);
        }
    }
}
int removeElement()
{
    // check queue is empty or not
    if (front == -1 && rear == -1)
    {
        printf("queue is empty.");
        return 0;
    }
    else
    {
        // removing items with increasing the value of front by 1;
        int n;
        front = (front + 1) % MAX_SIZE;
        n = cq[front];
        printf("%d element removed successfully.", n);
    }
}
int displayElement()
{
    int i;
    // check queue is empty or not
    if (front == -1 && rear == -1)
    {
        printf("queue is empty.");
        return 0;
    }
    else{
        for ( i = front; i !=rear; (i=(i+1)%MAX_SIZE))
        {
            printf("element :%d\n",cq[i]);
        }
        printf("elements :%d",cq[i]);
        
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
            removeElement();
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