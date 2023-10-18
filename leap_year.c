//program to check if given year is leap year or not

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check\n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The year is a leap year \n");
            }
            else
            {
                printf("The year is not a leap year \n");
            }
        }
        else
        {
            printf("The year is Leap year\n");
        }
    }
    else
    {
        printf("The year is not a leap year ");
    }

    return 0;
}