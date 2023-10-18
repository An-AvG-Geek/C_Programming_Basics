// this program inputs 10 numbers from the users ,stores them into an array and gives the number
// of even ,odd and zeros the user inputted 


#include<stdio.h>
int main(){
    printf("Enter 10 numbers into the array\n");
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);

    }
    int even =0,odd=0,zero=0;
    for(int i=0;i<10;i++){
        if (a[i]==0){
            zero++;
        }
        else if(a[i]%2){
            even ++;

        }
        else{
            odd++;
        }
    }
    printf("The number of zeros is %d\n",zero);
    printf("The number of even numbers is %d\n",even);
    printf("The number of odd numbers is %d\n",odd);
    return 0;

}