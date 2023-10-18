//program to print reverse of a number

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to display reverse of\n");
    scanf("%d",&num);
    int newnum=num;
    int rev=0;
    while (num>=1){
        int rem=num%10;
        
        rev=rev*10+rem;
        num=num/10;

    }
    printf("the reverse of the number is %d ",rev);
    return 0;

}