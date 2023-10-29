#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};

struct cll
{
    struct node *head;
};

char isEmpty(struct cll *l)
{
    if (l->head == NULL)
    {
        return 1;
    }
    else
        return 0;
}

void addFront(struct cll *l, struct node *new)
{
    if (l->head==NULL)
    {
        l->head = new;
        new->prev = new->next = new;
    }
    new->next = l->head;
    new->prev = l->head->prev;
    l->head->prev->next = new;
    l->head->prev = new;
    l->head = new;
}

void addEnd(struct cll *l, struct node *new)
{
    if (l->head==NULL)
    {
        l->head = new;
        new->prev = new->next = new;
    }
    new->next = l->head;
    new->prev = l->head->prev;
    l->head->prev->next = new;
    l->head->prev = new;
}

void deleteFront(struct cll *l)
{
    if (l->head->next == l->head)
    {
        l->head = NULL;
    }
    else
    {
        l->head->prev->next = l->head->next;
        l->head->next->prev = l->head->prev;
        struct node *temp = l->head;
        l->head = temp->next;
        free(temp);
    }
}

void deleteEnd(struct cll *l)
{
    if (l->head->next == l->head)
    {
        l->head = NULL;
    }
    else
    {
        struct node *temp = l->head->prev;
        temp->prev->next = l->head;
        l->head->prev = temp->prev;
        free(temp);
    }
}

void traverse(struct cll *l)
{
    struct node *temp = l->head;
    while (temp->next != l->head)
    {
        printf("%d    ", temp->data);
        temp = temp->next;
    }
    printf("%d    \n", temp->data);
}

int main()
{
    struct cll *ptr;
    struct cll l1, l2;
    struct node temp;
    temp.next = NULL;
    temp.prev = NULL;
    int clchoice, choice;

    while (1)
    {
        while (1)
        {
            printf("Select the doubly circular linked list: 1 or 2 3:EXIT\n");
            scanf("%d", &clchoice);
            if (clchoice == 1 || clchoice == 2)
                break;
            if (clchoice == 3)
                return 0;
        }
        ptr = (clchoice == 1) ? &l1 : &l2 ;
        printf("Select operation: 1:isempty 2:addFront 3:addEnd 4:deleteFront 5:deleteEnd 6:traverse other:EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (isEmpty(ptr))
                printf("YES\n");
            else
                printf("NO\n");
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &temp.data);
            addFront(ptr, &temp);
            break;
        case 3:
            printf("Enter data: ");
            scanf("%d", &temp.data);
            addEnd(ptr, &temp);
            break;
        case 4:
            if (isEmpty(ptr))
            {
                printf("UNDERFLOW\n");
                break;
            }
            else
            {
                deleteFront(ptr);
                break;
            }
        case 5:
            if (isEmpty(ptr))
            {
                printf("UNDERFLOW\n");
                break;
            }
            else
            {
                deleteEnd(ptr);
                break;
            }
        case 6:
            if (isEmpty(ptr))
            {
                printf("UNDERFLOW\n");
                break;
            }
            else
            {
                traverse(ptr);
                break;
            }            
        default:
            return 0;
            break;
        }
    }
    return 0;
}