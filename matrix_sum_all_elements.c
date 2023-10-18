// this program prints the sum of all the elements of the matrix that is inputted by the user


#include<stdio.h>
int main(){
    printf("Enter the number of rows\n");
    int rows,col;
    scanf("%d",&rows);
    printf("Enter the number of coloumns\n");
    scanf("%d",&col);
    printf("Enter the values into the matrix\n");
    int mat[rows][col];

    for(int i=0;i<rows;i++){
        for(int j=0 ; j<col;j++){
            scanf("%d",&mat[i][j]);
        }
    }


    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            sum=sum+mat[i][j];
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("The sum of all the elements of the matrix is %d",sum);


    return 0;
}