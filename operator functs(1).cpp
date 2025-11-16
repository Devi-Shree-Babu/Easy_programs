#include <stdio.h>
#include <math.h>

int main() 
{
    int x, n, choice;
    float result;

    printf("Enter value of X: ");
    scanf("%d", &x);

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("\nChoices:\n");
    printf("1. Pow(X, N)\n");
    printf("2. Add(X, N)\n");
    printf("3. Sub(X, N)\n");
    printf("4. Mul(X, N)\n");
    printf("5. Div(X, N)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) 
	{
        case 1:
            result = pow(x, n);
            printf("The result is = %.2f",result);
            break;

        case 2:
            result = x+n;
            printf("The result is = %.2f",result);
            break;

        case 3:
            result = x - n;
            printf("The result is = %.2f", result);
            break;

        case 4:
            result = x * n;
            printf("The result is = %.2f",result);
            break;

        case 5:
            if(n == 0)
			{
                printf("Error: Division by zero is not possible.");
            } 
			else 
			{
                result = (float)x / n;
                printf("The result is = %.2f",result);
            }
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}

