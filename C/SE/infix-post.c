#include<stdio.h>
#include<ctype.h>
char Stack[50];
int top = -1;
void Push(char x)
{
    Stack[++top] = x;
}

char Pop()
{
    if (top == -1)
        return -1;
    else
        return Stack[top--];
    
}

int Priority(char x)
{
    if (x == '(')
        return 0;
    else if(x == '+' || x == '-')
        return 1;
    else if(x == '*' || x == '/' || x == '%')
        return 2;
    else if (x == '^')
        return 3;
}

void main()
{
    char Exp[100];
    char *e, x;
    printf("Enter the expression: ");
    scanf("%s", Exp);
    e = Exp;
    
    while (*e != '\0')
    {
        if(isalnum(*e))
            printf("%c", *e);
        else if (*e == '(')
            Push(*e);
        else if (*e == ')')
        {
            while ((x = Pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while (Priority(Stack[top]) >= Priority(*e))
            {
                printf("%c", Pop());
            }
            Push(*e);
        }
        e++;
    }
    while (top != -1)
        printf("%c", Pop());
}