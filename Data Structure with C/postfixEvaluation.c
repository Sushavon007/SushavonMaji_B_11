// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #define MAX_SIZE 100
// struct Stack {
//     int top;
//     unsigned capacity;
//     int* array;
// };
// struct Stack* createStack(unsigned capacity) {
//     struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
//     if (!stack) return NULL;
//     stack->top = -1;
//     stack->capacity = capacity;
//     stack->array = (int*)malloc(stack->capacity * sizeof(int));
//     if (!stack->array) return NULL;
//     return stack;
// }
// int isEmpty(struct Stack* stack) {
//     return stack->top == -1;
// }
// int peek(struct Stack* stack) {
//     return stack->array[stack->top];
// }
// int pop(struct Stack* stack) {
//     if (!isEmpty(stack))
//         return stack->array[stack->top--];
//     return -1;
// }
// void push(struct Stack* stack, int operand) {
//     stack->array[++stack->top] = operand;
// }
// int evaluatePostfix(char* postfix) {
//     struct Stack* stack = createStack(strlen(postfix));
//     if (!stack) return -1;
//     int i;
//     for (i = 0; postfix[i]; ++i) {
//         if (isdigit(postfix[i])) {
//             push(stack, postfix[i] - '0');
//         } else {
//             int operand2 = pop(stack);
//             int operand1 = pop(stack);
//             switch (postfix[i]) {
//                 case '+':
//                     push(stack, operand1 + operand2);
//                     break;
//                 case '-':
//                     push(stack, operand1 - operand2);
//                     break;
//                 case '*':
//                     push(stack, operand1 * operand2);
//                     break;
//                 case '/':
//                     push(stack, operand1 / operand2);
//                     break;
//             }
//         }
//     }
//     return pop(stack);
// }
// int main() {
//     char postfix[MAX_SIZE];
//     printf("Enter a postfix expression: ");
//     fgets(postfix, MAX_SIZE, stdin);
//     int result = evaluatePostfix(postfix);
//     if (result != -1) {
//         printf("Result after evaluation: %d\n", result);
//     } else {
//         printf("Error occurred while evaluating the postfix expression.\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_EXPRESSION_SIZE 100
typedef struct{
    int data[MAX_EXPRESSION_SIZE];
    int top;
} Stack;
void initialize(Stack *stack){
    stack->top = -1;
}
void push(Stack *stack, int item){
    if (stack->top == MAX_EXPRESSION_SIZE - 1){
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->data[++stack->top] = item;
}
int pop(Stack *stack){
    if (stack->top == -1){
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}
int evaluatePostfix(char *postfixExpression){
    Stack operandStack;
    initialize(&operandStack);
    for (int i = 0; postfixExpression[i] != '\0'; i++){
        char currentChar = postfixExpression[i];
        if (isdigit(currentChar)){
            push(&operandStack, currentChar - '0');
        }
        else if (currentChar == ' '){
            continue;
        }
        else{
            int operand2 = pop(&operandStack);
            int operand1 = pop(&operandStack);
            switch (currentChar){
            case '+': push(&operandStack, operand1 + operand2);
                      break;
            case '-': push(&operandStack, operand1 - operand2);
                break;
            case '*': push(&operandStack, operand1 * operand2);
                      break;
            case '/': push(&operandStack, operand1 / operand2);
                      break;
            default:  printf("Invalid operator: %c\n", currentChar);
                      exit(EXIT_FAILURE);
            }
        }
    }
    return pop(&operandStack);
}
int main(){
    char postfixExpression[MAX_EXPRESSION_SIZE];
    printf("Enter Postfix Expression:");
    scanf("%s", postfixExpression);
    int result = evaluatePostfix(postfixExpression);
    printf("Result: %d\n", result);
    return 0;
}
