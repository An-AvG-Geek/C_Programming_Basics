// program to calculate simple interest

#include <stdio.h>
int main()
{
    float prin, rate, time, amt;
    printf("Enter the principle\n");
    scanf("%f", &prin);
    printf("Enter the Rate of Interest\n");
    scanf("%f", &rate);
    printf("Enter the time period\n");
    scanf("%f", &time);
    amt = prin * time * rate / 100;
    printf("The Simple interest of the Given conditions will be %f and the total amount will be %f ", amt, amt + prin);
    return 0;
}