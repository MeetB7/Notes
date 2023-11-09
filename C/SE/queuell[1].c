#include <stdio.h>            
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};



struct queue *enqueue(struct queue *q, int val)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = val;
    ptr->next = NULL;

    if (q == NULL)
    {
        q = (struct queue *)malloc(sizeof(struct queue));
        q->front = ptr;
        q->rear = ptr;
    }
    else
    {
        q->rear->next = ptr;
        q->rear = ptr;
    }
    return q;
}


struct queue *dequeue(struct queue *q)
{
    struct node *ptr;
    if (q == NULL)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        ptr = q->front;
        q->front = ptr->next;
        printf("Deleted value: %d\n", ptr->data);
        free(ptr);
    }
    return q;
}

int peek(struct queue *q)
{
    struct node *ptr;
    ptr = q->front;
    if (q == NULL)
    {
        printf("Cannot peek, queue empty\n");
    }
    
        return ptr->data;
    
}
struct queue *display(struct queue *q)
{
    struct node *ptr = q->front;
    if (q == NULL)
    {
        printf("Empty queue\n");
    }
    else
    {
        while (ptr != NULL){
       
            printf("Element is: %d\n", ptr->data);
             ptr=ptr->next;}
    }
    return q;
}

void create_queue(struct queue* q){
    q->front=NULL;
    q->rear=NULL;
}
void main()
{struct queue* q;
    int choice, val;
    create_queue(q);
   q=NULL;

    do
    {
        printf("\n******MAIN MENU******\n");

        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Peek\n");
        printf("5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to be inserted:");
            scanf("%d", &val);
            q = enqueue(q, val);
            printf("Insertion successful\n");
            break;

        case 2:
            q = dequeue(q);
            break;

        case 3:
            q = display(q);
            break;

        case 4:
             printf("Peeked value: %d",peek(q));
            break;
        case 5:
        printf("Exit successful");

        default:
        printf("Wrong choice, please select again");
        }

    } while (choice!= 5);
}