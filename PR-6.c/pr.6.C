#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int modulus(int a, int b);

int main() {
    char choice;
    float num1, num2;
    int int1, int2;

    do {
        
        printf("\nSimple Calculator\n");
        printf("Select an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("Press 'e' to exit.\n");
        
        
        choice = getchar();
        getchar(); 
        
        
        switch(choice) {
            case '1':
                printf("Enter 2 digit numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case '2':
                printf("Enter 2 digit numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", subtract(num1, num2));
                break;
            case '3':
                printf("Enter 2 digit numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %.2f\n", multiply(num1, num2));
                break;
            case '4':
                printf("Enter 2 digit numbers: ");
                scanf("%f %f", &num1, &num2);
                if (num2 != 0) {
                    printf("Result: %.2f\n", divide(num1, num2));
                } else {
                    printf(" Division by zero.\n");
                }
                break;
            case '5':
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
                if (int2 != 0) {
                    printf("Result: %d\n", modulus(int1, int2));
                } else {
                    printf(" Division by zero.\n");
                }
                break;
            case 'e':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 'e');

    return 0;
}


float add(float a, float b) 
    {
	return a + b;
}

float subtract(float a, float b) {

    return a - b;}


float multiply(float a, float b) 
   {
	return a * b;}


float divide(float a, float b){
 
    return a / b;}


int modulus(int a, int b){
 
    return a % b;}


