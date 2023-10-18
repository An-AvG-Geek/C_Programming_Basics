// program to reverse a string 

#include<stdio.h>
void rev(char reverse[50]);
int main(){
    printf("Enter the string you want to reverse\n");
    char reverse[50];
    gets(reverse);
    rev(reverse);
    return 0;


    
}
void rev(char reverse[50]){
    int i=0;
    while(reverse[i]!='\0'){
        i++;

    }


    char new[50];
    int j=0;
    while(i-1>-1){

        new[j]=reverse[i-1];
        i--;
        j++;


    }

    new[j]='\0';

    printf("the revese of the string inputed is \n");

   
    puts(new);
}