// program to print sum of array using pointers concept


#include<stdio.h>
int sum(int *arr,int size);
int main(){
    printf("Enter the length of the array\n");
    int size;
    
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements into the array\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    int sumo;


    sumo=sum(arr,size);
    printf("the sum of elements of the array is %d",sumo);


    
    
    return 0;
    
    
    }

    int sum(int *arr,int size){
        int sum=0;
        
        for(int i=0;i<size;i++){

            sum=sum+*arr;
            arr++;

        }   return sum;
        
        
         }