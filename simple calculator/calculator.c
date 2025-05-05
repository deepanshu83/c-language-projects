#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}
