// program to print armstrong number with a limit


#include<stdio.h>
int main(){
    int a,b;

    printf("Enter the lower limit\n");
    scanf("%d",&a);
    printf("Enter the upper limit\n");
    scanf("%d",&b);
    
   int i;
   for (i=a;i<=b;i++){
    int newnum=i;
    int j=i;

    int sum=0,rem=0;
    while(j>0){
      

    
        
        rem=j%10;
        sum=sum+(rem*rem*rem);

        j=j/10;
        

        
    }
    if (sum==newnum){
            printf("%d\n",newnum);
        }


   }
}