#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct list
{
    struct node *head;
};

void addfront(struct list *l, struct node *new)
{
    new->next = l->head;
    l->head = new;
}

void addend(struct list *l, struct node *new)
{
    new->next == NULL;
    if (l->head == NULL)
    {
        l->head = new;
        return;
    }
    struct node *ptr = l->head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new;
}

void deletefront(struct list *l)
{
    if (l->head == NULL)
    {
        printf("UNDERFLOW");
        return;
    }
    struct node *temp = l->head;
    l->head = l->head->next;
    free(temp);
    temp = NULL;
}

void deleteend(struct list *l)
{
    if (l->head == NULL)
    {
        printf("UNDERFLOW");
        return;
    }
    if (l->head->next == NULL)
    {
        free(l->head);
        l->head = NULL;
        return;
    }
    struct node *ptr = l->head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

void traverse(struct list *l)
{
    struct node *ptr = l->head;
    do
    {
        printf("\nID: %d", ptr->data);
        ptr = ptr->next;
    } while (ptr->next != NULL);
}