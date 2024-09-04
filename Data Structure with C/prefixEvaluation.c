#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
struct Stack* createStack(unsigned capacity) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (!stack) return NULL;
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    if (!stack->array) return NULL;
    return stack;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
int peek(struct Stack* stack) {
    return stack->array[stack->top];
}
int pop(struct Stack* stack) {
    if (!isEmpty(stack))
        return stack->array[stack->top--];
    return -1;
}
void push(struct Stack* stack, int operand) {
    stack->array[++stack->top] = operand;
}
int evaluatePrefix(char* prefix) {
    struct Stack* stack = createStack(strlen(prefix));
    if (!stack) return -1;
    int i;
    for (i = strlen(prefix) - 1; i >= 0; --i) {
        if (isdigit(prefix[i])) {
            push(stack, prefix[i] - '0');
        } else {
            int operand1 = pop(stack);
            int operand2 = pop(stack);
            switch (prefix[i]) {
                case '+':
                    push(stack, operand1 + operand2);
                    break;
                case '-':
                    push(stack, operand1 - operand2);
                    break;
                case '*':
                    push(stack, operand1 * operand2);
                    break;
                case '/':
                    push(stack, operand1 / operand2);
                    break;
            }
        }
    }
    return pop(stack);
}
int main() {
    char prefix[MAX_SIZE];
    printf("Enter a prefix expression: ");
    fgets(prefix, MAX_SIZE, stdin);
    int result = evaluatePrefix(prefix);
    if (result != -1) {
        printf("Result after evaluation: %d\n", result);
    } else {
        printf("Error occurred while evaluating the prefix expression.\n");
    }
    return 0;
}