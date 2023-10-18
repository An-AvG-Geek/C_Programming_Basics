// program for simple arithematic calculator using c 

#include <stdio.h>
int main()
{
    printf("\t\tsimple arimatic caculator\n");
    printf("1. addition of 2 numbers\n");
    printf("2. subtraction of 2 numbers\n");
    printf("3. multiplication of two numbers\n");
    printf("4. division of two numbers\n");

    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("Enter the choice you want to enter\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("the sum of %d and %d is %d \n", a, b, a + b);

        break;

    case 2:
        printf("the difference %d and %d is %d \n", a, b, a - b);

        break;

    case 3:
        printf("The product of %d and %d is %d \n", a, b, a * b);

        break;

    case 4:
        float quo;
        quo = (float)a / (float)b;
        printf("the quotient of %f and %f is %f\n", (float)a, (float)b, quo);

        break;

    default:
        printf("enter a valid choice\n");

        break;
    }

    return 0;
}