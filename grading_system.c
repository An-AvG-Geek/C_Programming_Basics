//program to find grade of student 


#include<stdio.h>
int main(){
    float marks;
    printf("Enter the mark of the student \n");
    scanf("%f",&marks);
    if (marks<60){
        printf("The student has scored F grade ");
    }
    else if(marks>60 && marks<70){
        printf("The student has scored a D grade");

    }
    else if (marks>70 && marks<80){
        printf("The student has scored a C grade");

    }
    else if (marks >80 && marks <90){
        printf("The student has scored a B grade");
    }
    else if(marks >90 && marks <100){
        printf("The student has scored an A grade ");

    }
    else{
        printf("Invalid marks .... please enter again");
    }
return 0;
}
