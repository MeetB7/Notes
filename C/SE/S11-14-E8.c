#include <stdio.h>
#include <stdlib.h>

struct node
{
    int ID;
    struct node *next;
};

struct stack
{
    struct node *top;
};

void push(struct stack *s, struct node *new)
{
    new->next = s->top;
    s->top = new;
}

struct node pop(struct stack *s)
{
    struct node *temp = s->top;
    s->top = s->top->next;
    struct node popstudent = *temp;
    free(temp);
    temp = NULL;
    return popstudent;
}

struct node *peek(struct stack *s)
{
    return s->top;
}

int isempty(struct stack *s)
{
    if (s->top == NULL)
    {
        return 1;
    }
    else
        return 0;
}

int main(void)
{
    struct stack s1, s2;
    struct stack *ptr;
    struct node student;
    struct node *peekptr;
    int choice, schoice = 0;
    s1.top = NULL;
    s2.top = NULL;
    student.next = NULL;

    while (1)
    {
        while(1){
            printf("Select a stack (s1: 1 s2: 2 exit:3\n");
            scanf("%d", &schoice);
            if(schoice==1 || schoice==2)
            break;
            if(schoice == 3)
            return 2;
        }
        ptr = (schoice == 1 ? &s1 : &s2);

        printf("Select operation:\n1:push 2:pop 3:peek 4:isempty other:exit\n");
        scanf("%d",&choice);
        
        switch (choice)
        {
        case 1:
            struct node *newStudent = malloc(sizeof(struct node));
            if (newStudent == NULL) {
                printf("Memory allocation failed.\n");
                return 1;
            }
            printf("Enter student id: ");
            scanf("%d", &newStudent->ID);
            push(ptr, newStudent);
            break;
        case 2:
            if (ptr->top == NULL)
                printf("UNDERFLOW\n");
            else{
            student = pop(ptr);
            printf("Popped stduent id is %d\n", student.ID);
            }
            break;
        case 3:
            if (ptr->top == NULL)
                printf("UNDERFLOW\n");
            else {
            peekptr = peek(ptr);
            printf("Peeked ID is %d\n", peekptr->ID);
            }
            break;
        case 4:
            if (isempty(ptr))
                printf("Stack is empty.\n");
            else
                printf("Stack is not empty.\n");
            break;
        default:
            return 0;
            break;
        }
    }
    return 0;
}