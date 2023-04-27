#include <stdio.h>
#include <math.h>

int main() {
    double x, n, result;
    int choice;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%lf", &n);

    printf("Enter the arithmetic operation to be performed: \n");
    printf("1. x^n (Power)\n");
    printf("2. x + n (Addition)\n");
    printf("3. x - n (Subtraction)\n");
    printf("4. x * n (Multiplication)\n");
    printf("5. x / n (Division)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = pow(x, n);
            printf("%.2lf ^ %.2lf = %.2lf\n", x, n, result);
            break;
        case 2:
            result = x + n;
            printf("%.2lf + %.2lf = %.2lf\n", x, n, result);
            break;
        case 3:
            result = x - n;
            printf("%.2lf - %.2lf = %.2lf\n", x, n, result);
            break;
        case 4:
            result = x * n;
            printf("%.2lf * %.2lf = %.2lf\n", x, n, result);
            break;
        case 5:
            result = x / n;
            printf("%.2lf / %.2lf = %.2lf\n", x, n, result);
            break;
        default:
            printf("Invalid choice. Please choose between 1 and 5.\n");
            break;
    }

    return 0;
}
