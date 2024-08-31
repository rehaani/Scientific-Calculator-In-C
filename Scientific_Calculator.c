#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function prototypes
void displayMenu();
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
float power(float base, float exponent);
float squareRoot(float num);
float sine(float angle);
float cosine(float angle);
float tangent(float angle);
float logarithm(float num);

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 3:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 4:
                printf("Enter the first number: ");
                scanf("%f", &num1);
                printf("Enter the second number: ");
                scanf("%f", &num2);
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 5:
                printf("Enter the base: ");
                scanf("%f", &num1);
                printf("Enter the exponent: ");
                scanf("%f", &num2);
                result = power(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = squareRoot(num1);
                printf("Result: %.2f\n", result);
                break;
            case 7:
                printf("Enter an angle in radians: ");
                scanf("%f", &num1);
                result = sine(num1);
                printf("Result: %.2f\n", result);
                break;
            case 8:
                printf("Enter an angle in radians: ");
                scanf("%f", &num1);
                result = cosine(num1);
                printf("Result: %.2f\n", result);
                break;
            case 9:
                printf("Enter an angle in radians: ");
                scanf("%f", &num1);
                result = tangent(num1);
                printf("Result: %.2f\n", result);
                break;
            case 10:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = logarithm(num1);
                printf("Result: %.2f\n", result);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void displayMenu() {
    printf("\n=== Scientific Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Sine\n");
    printf("8. Cosine\n");
    printf("9. Tangent\n");
    printf("10. Logarithm\n");
    printf("0. Exit\n");
    printf("=============================\n");
}

float add(float num1, float num2) { return num1 + num2; }
float subtract(float num1, float num2) { return num1 - num2; }
float multiply(float num1, float num2) { return num1 * num2; }
float divide(float num1, float num2) { return num2 != 0 ? num1 / num2 : 0; }
float power(float base, float exponent) { return pow(base, exponent); }
float squareRoot(float num) { return sqrt(num); }
float sine(float angle) { return sin(angle); }
float cosine(float angle) { return cos(angle); }
float tangent(float angle) { return tan(angle); }
float logarithm(float num) { return log(num); }