// program to sort an array using bubble sort technique

#include<stdio.h>
int main(){
    printf("enter the limit of the array\n");
    int limit;
    scanf("%d",&limit);
    int arr[limit];
    printf("Enter values into the array\n");
    for(int i=0;i<limit;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){

            if (arr[i]<arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }

        }
    }
    printf("The sorted array array is \n");
    for (int i=0;i<limit;i++){
        printf("%d\t",arr[i]);

    }
    return 0;
}