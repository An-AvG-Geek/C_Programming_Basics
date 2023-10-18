//program to convert celcius to farenhiet


#include<stdio.h>
int main(){
    float celcius;
    
    printf("Enter the temperature in celcius \n");
    scanf("%f",&celcius);
    float far=(celcius*9.0/5)+32;
    printf("The temperature in farenhiet is %f",far);
    return 0;
    
}