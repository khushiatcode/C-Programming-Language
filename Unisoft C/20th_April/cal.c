#include<stdio.h>

void main() 
{
    int num1, num2, ans, choice;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter your choice: ");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        ans = num1+num2;
        printf("Addition is: %d", ans);
        break;

    case 2:
        ans = num1-num2;
        printf("Difference is: %d", ans);
        break;

    case 3:
        ans = num1*num2;
        printf("Product is: %d", ans);
        break;

    case 4:
        ans = num1/num2;
        printf("Division is: %d", ans);
        break;
    
    default:
        printf("Enter a valid choice!");
        break;
    }
    
}