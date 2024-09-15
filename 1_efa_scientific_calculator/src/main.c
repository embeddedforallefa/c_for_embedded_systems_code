#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

// Stack for numbers (used for evaluation of the postfix expression)
typedef struct {
    double *data;
    int top;
    int maxSize;
} Stack;

void initStack(Stack *s, int maxSize) {
    s->data = (double *)malloc(maxSize * sizeof(double));
    s->top = -1;
    s->maxSize = maxSize;
}

void push(Stack *s, double val) {
    if (s->top == s->maxSize - 1) {
        printf("Stack overflow!\n");
        return;
    }
    s->data[++(s->top)] = val;
}

double pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow!\n");
        return 0;
    }
    return s->data[(s->top)--];
}

double peek(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty!\n");
        return 0;
    }
    return s->data[s->top];
}

// Stack for operators (used in the conversion from infix to postfix)
typedef struct {
    char *data;
    int top;
    int maxSize;
} CharStack;

void initCharStack(CharStack *s, int maxSize) {
    s->data = (char *)malloc(maxSize * sizeof(char));
    s->top = -1;
    s->maxSize = maxSize;
}

void pushChar(CharStack *s, char val) {
    if (s->top == s->maxSize - 1) {
        printf("Stack overflow!\n");
        return;
    }
    s->data[++(s->top)] = val;
}

char popChar(CharStack *s) {
    if (s->top == -1) {
        printf("Stack underflow!\n");
        return '\0';
    }
    return s->data[(s->top)--];
}

char peekChar(CharStack *s) {
    if (s->top == -1) {
        return '\0';
    }
    return s->data[s->top];
}

// Check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

// Convert infix expression to postfix using the Shunting Yard Algorithm
void infixToPostfix(char* expression, char* output) {
    CharStack operators;
    initCharStack(&operators, 100);
    int j = 0; // Output index

    for (int i = 0; expression[i] != '\0'; i++) {
        char c = expression[i];

        // If the character is a number or a decimal point
        if (isdigit(c) || c == '.') {
            output[j++] = c;
        }
        else if (c == '(') {
            pushChar(&operators, c);
        }
        else if (c == ')') {
            while (peekChar(&operators) != '(') {
                output[j++] = ' ';
                output[j++] = popChar(&operators);
            }
            popChar(&operators); // Remove '('
        }
        else if (isOperator(c)) {
            output[j++] = ' ';
            while (precedence(peekChar(&operators)) >= precedence(c)) {
                output[j++] = popChar(&operators);
                output[j++] = ' ';
            }
            pushChar(&operators, c);
        }
    }

    // Pop remaining operators
    while (operators.top != -1) {
        output[j++] = ' ';
        output[j++] = popChar(&operators);
    }

    output[j] = '\0'; // Null-terminate the string
}

// Evaluate the postfix expression
double evaluatePostfix(char* postfix) {
    Stack values;
    initStack(&values, 100);

    char* token = strtok(postfix, " ");
    while (token != NULL) {
        // If the token is a number, push it to the stack
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            push(&values, atof(token));
        }
        else if (isOperator(token[0])) {
            // Pop two operands and perform the operation
            double b = pop(&values);
            double a = pop(&values);
            switch (token[0]) {
                case '+': push(&values, a + b); break;
                case '-': push(&values, a - b); break;
                case '*': push(&values, a * b); break;
                case '/': 
                    if (b == 0) {
                        printf("Error: Division by zero!\n");
                        return 0;
                    }
                    push(&values, a / b); 
                    break;
                case '^': push(&values, pow(a, b)); break;
            }
        }
        token = strtok(NULL, " ");
    }

    // The final result will be at the top of the stack
    return pop(&values);
}

int main() {
    char expression[100];
    char postfix[100];

    printf("Enter a mathematical expression: ");
    fgets(expression, 100, stdin);

    infixToPostfix(expression, postfix);
    printf("Postfix Expression: %s\n", postfix);

    double result = evaluatePostfix(postfix);
    printf("Result: %.2f\n", result);

    return 0;
}
