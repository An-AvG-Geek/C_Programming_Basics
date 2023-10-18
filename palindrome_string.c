// program to check if given string is palindrome or not

#include<stdio.h>
int main(){
    printf("Enter The string \n");
    char name[100];
    gets(name);

    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    int len=i;
    char newname[100];
    int j=0;
    while(i>-1){
        newname[j]=name[i-1];
        i--;
        j++;

    }

    newname[j]='\0';
    printf("The inputed string is\n");
    puts(name);
    printf("the reversed string is \n");
    puts(newname);

    int key=0;
    for(int i=0;i<len;i++){
        if (name[i]==newname[i]){
            key=1;
        }
        else{
            key=0;

        }

        
    }

    if(key==1){
        printf("the given string is a palindrome\n");

    }
else{
    printf("the given string is not a palindrome \n");
}

    return 0;






}