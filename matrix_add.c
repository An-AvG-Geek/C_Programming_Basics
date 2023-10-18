// program to add given two matrix


#include<stdio.h>
int main(){
    printf("Enter the number of rows\n");
    int row,col;
    scanf("%d",&row);
    printf("Enter the number of coloumns\n");
    scanf("%d",&col);
    int a[row][col],b[row][col],sum[row][col];
    printf("Enter the elements of the first matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("The new matrix is \n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;


}