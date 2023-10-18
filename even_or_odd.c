//program to check if inputted number is even or odd

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number you want to check\t");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("This number %d is divisbile by 2", num);
    }
    else
    {
        printf("This number %d is not divisble by 2", num);
    }
    return 0;
}