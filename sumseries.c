// program to print the sum of series 1/n + 1/(n-1).......+1 



#include<stdio.h>
int main(){
    printf("Enter the limit \n");
    int limit;
    scanf("%d",&limit);
    printf("\n");
    double sum=0;

    for(int i=1;i<=limit;i++){
        printf("1/%d ",i);
        
        
        sum=sum+(1.0/(float)i);
        if (i<limit){
            printf("+ ");
        }


    }
    
    printf("\n\nThe sum of the given series is %lf\n\n",sum);
    return 0;
}