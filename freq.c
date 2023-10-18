//program to calculate frequency of given character in a string

#include<stdio.h>
int main(){
    printf("Enter the string\n");
    char a[30];
    gets(a);

    printf("Enter the character you want to search\n");
    char b;
    scanf("%c",&b);

    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    int count=0;

    for(int j=0;j<i;j++){
        if(a[j]==b){
            count++;
            
        }
    }
    printf("The frequency of the given character is %d",count);
    return 0;

    
    
    }
    
