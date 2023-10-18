// program to find sum of two complex numbers 

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the real part of the first complex number \n");
    scanf("%d",&a);
    printf("Enter the imagainery part of the first complex number\n");
    scanf("%d",&b);
    printf("Enter the real part of the second complex number\n");
    scanf("%d",&c);
    printf("Enter the imaginery part of the second complex number\n");
    scanf("%d",&d);
  
    printf("\nthe first complex number is %d+%di\n",a,b);
    printf("the second complex number is %d+%di\n\n",c,d);
  
    printf("The sum of the two complex numbers is %d+%di\n\n",a+c,b+d);
    return 0;



}