// program to find greatest among 4 numbers which are not repetitive


#include <stdio.h>
int main()
{
    float num1, num2, num3, num4, first, second, greater;
    printf("Enter the first number\n");
    scanf("%f", &num1);

    printf("Enter the second number\n");
    scanf("%f", &num2);

    printf("Enter the third number\n");
    scanf("%f", &num3);

    printf("Enter the fourth number\n");
    scanf("%f", &num4);

    if (num1 > num2)
    {
        first = num1;
    }
    else if (num2 > num1)
    {
        first = num2;
    }
    else
    {
        first = num1;
    }

    if (num3 > num4)
    {
        second = num3;
    }

    else if (num4 > num3)
    {
        second = num4;
    }
    else
    {
        second = num3;
    }

    if (first > second)
    {
        greater = first;
        printf("The greater number of the four numbers is %f ", greater);
    }
    else if (second > first)
    {
        greater = second;
        printf("The greater number of the four numbers is %f ", greater);
    }
    else
    {
        printf("There are repetitive greater numbers ie %f .... try again with another set of numbers \n",first);
    }
    return 0;
}