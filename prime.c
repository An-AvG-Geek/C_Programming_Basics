// program to check if given number is prime or not

#include<stdio.h>
int main()
{
    int num,a=1,n=0;
    printf("Enter the numbner \n");
    scanf("%d",&num);
    while(a<=num){
        if (num%a==0){
            n++;
        }
        a++;
        }
        if (n==2){
            printf("number is prime \n");
        }
        else{
            printf("number is not prime\n");
        }
        return 0;
    }



