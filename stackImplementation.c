#include <stdio.h>
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1;

int pushElement()
{
    // check stack is full or not
    if (top == MAX_SIZE - 1)
    {
        printf("stack is full.!!\n");
        return 0;
    }
    else
    {
        int n;
        printf("enter an element:");
        scanf("%d", &n);
        //increasing the value of an stack
        top++;
        stack[top] = n;
        printf("%d item added successfully.\n", n);
    }
}
int popElement()
{
    int n;
    // check stack is empty or not
    if (top == -1)
    {
        printf("stack is empty.\n");
        return 0;
    }
    else
    {
        n = stack[top];
        top--;
        printf("%d item poped successfully.!!\n", n);
    }
}
int displayElement()
{
    // check stack is empty or not
    if (top == -1)
    {
        printf("stack is empty.!!\n");
        return 0;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("element : %d\n", stack[i]);
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
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            pushElement();
            break;
        case 2:
            popElement();
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