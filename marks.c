// this program inputs the mark of a student in 5 subjects and prints the total and average marks

#include<stdio.h>
int main(){
    printf("Enter the marks of students\n");
    int mark[5];
    float avg=0;
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&mark[i]);
        

    }
    for(int i=0;i<5;i++){
        sum=sum+mark[i];
        
    }
    avg=sum/5.0;
    printf("the sum of the marks is %d and average is %f ",sum,avg);
    return 0;

}