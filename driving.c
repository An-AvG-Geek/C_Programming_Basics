//program to check if you are eligible to drive

#include<stdio.h>
int main(){
    int age;
    printf("Enter your age for verification \n");
    scanf("%d",&age);
    if (age>18 && age<90){
        printf("you are eligible to drive\n");

    }
    else{
        printf("Driving is a crime that can get you arrested \n");

    }
    return 0;
}