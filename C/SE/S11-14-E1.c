#include <stdio.h>
#include <stdlib.h>

struct student
{
    unsigned int roll;
    unsigned int marks;
};

struct stack
{
    unsigned int max;
    unsigned int top;
    struct student *students;
};

char isfull(struct stack *s)
{
    if (s->top == s->max)
        return 1;
    return 0;
}

char isempty(struct stack *s)
{
    if (s->top == 0)
        return 1;
    else
        return 0;
}

struct student peek(struct stack *s)
{
    return s->students[s->top];
}

struct student pop(struct stack *s)
{
    struct student temp = s->students[s->top];
    s->top--;
    return temp;
}

void push(struct stack *s, struct student x)
{
    s->top++;
    s->students[s->top] = x;
    getchar();
}

int main(void)
{
    int choice;
    struct student x;
    struct stack stack;
    printf("Enter max: ");
    scanf("%u", &stack.max);
    stack.students = (struct student *)malloc((stack.max + 1) * sizeof(struct student));
    printf("1. isfull 2. isempty 3. peek 4. pop 5. push 6. quit\n");
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (isfull(&stack))
                printf("Yes\n");
            else printf("No\n");
            break;
        case 2:
            if (isempty(&stack))
                printf("Yes\n");
            else printf("No\n");
            break;
        case 3:
            if (!isempty(&stack))
            {
                x = peek(&stack);
                printf("Roll no: %u\nMarks: %u\n", x.roll, x.marks);
            }
            else
                printf("Empty stack\n");
            break;
        case 4:
            if (!isempty(&stack))
            {
                x = pop(&stack);
                printf("Roll no: %u\nMarks: %u\n", x.roll, x.marks);
            }
            else
                printf("Underflow stack\n");
            break;
        case 5:
            if (!isfull(&stack))
            {
                printf("Roll no: ");
                scanf("%u",&x.roll);
                printf("Marks: ");
                scanf("%u",&x.marks);
                push(&stack,x);
            }
            else printf("Overflow stack\n");
            break;
        case 6:
            free(stack.students);
            exit(0);
        default:
            printf("Invalid\n");
            break;
        }
    }
}