#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    unsigned capacity;
    char* array;
};
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (!stack) return NULL;
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (char*)malloc(stack->capacity * sizeof(char));
    if (!stack->array) return NULL;
    return stack;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
char peek(struct Stack* stack) {
    return stack->array[stack->top];
}
char pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return '$';
}
void push(struct Stack* stack, char op) {
    stack->array[++stack->top] = op;
}
int isOperand(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return -1;
}
void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
void infixToPrefix(char* infix, char* prefix) {
    int i, k;
    struct Stack* stack = createStack(strlen(infix));
    if (!stack) return;
    reverseString(infix);
    for (i = 0, k = -1; infix[i]; ++i) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }
    for (i = 0; infix[i]; ++i) {
        if (isOperand(infix[i]))
            prefix[++k] = infix[i];
        else if (infix[i] == '(')
            push(stack, infix[i]);
        else if (infix[i] == ')') {
            while (!isEmpty(stack) && peek(stack) != '(')
                prefix[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return;
            else
                pop(stack);
        } else {
            while (!isEmpty(stack) && precedence(infix[i]) <= precedence(peek(stack)))
                prefix[++k] = pop(stack);
            push(stack, infix[i]);
        }
    }
    while (!isEmpty(stack))
        prefix[++k] = pop(stack);
    prefix[++k] = '\0';
    reverseString(prefix);
}
int main() {
    char infix[MAX_SIZE], prefix[MAX_SIZE];
    printf("Enter an infix expression: ");
    fgets(infix, MAX_SIZE, stdin);
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}