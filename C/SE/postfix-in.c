#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 50

int Stack[MAX_STACK_SIZE];
int top = -1;

void Push(int x) {
    if (top < MAX_STACK_SIZE - 1) {
        Stack[++top] = x;
    } else {
        printf("Stack Overflow\n");
        exit(1);
    }
}

int Pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    } else {
        return Stack[top--];
    }
}

int EvaluatePostfix(char *exp) {
    int i, operand1, operand2, result;
    
    for (i = 0; exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            Push(exp[i] - '0'); // Convert char digit to integer
        } else {
            operand2 = Pop();
            operand1 = Pop();
            
            switch (exp[i]) {
                case '+':
                    Push(operand1 + operand2);
                    break;
                case '-':
                    Push(operand1 - operand2);
                    break;
                case '*':
                    Push(operand1 * operand2);
                    break;
                case '/':
                    Push(operand1 / operand2);
                    break;
                case '%':
                    Push(operand1 % operand2);
                    break;
                default:
                    printf("Invalid character in postfix expression\n");
                    exit(1);
            }
        }
    }
    
    result = Pop();
    return result;
}

int main() {
    char PostfixExp[100];
    printf("Enter the postfix expression: ");
    scanf("%s", PostfixExp);
    
    printf("Postfix Expression: %s\n", PostfixExp);
    
    int result = EvaluatePostfix(PostfixExp);
    printf("Result: %d\n", result);
    
    return 0;
}
