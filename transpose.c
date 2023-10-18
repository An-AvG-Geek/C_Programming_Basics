//this program print the transpose of the matrix that is inputted by the user
#include<stdio.h>
int main(){
    printf("Enter the rows of the matrix\n");
    int rows,col;
    scanf("%d",&rows);
    printf("Enter the coloums of the matrix\n");
    scanf("%d",&col);

    int mat[rows][col];
    printf("Enter the values into the matrix \n");


    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[i][j]);

        }
    }

    // transpose function 
    int trans[col][rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){

            trans[j][i]=mat[i][j];

        }
    }

    for(int i=0;i<col;i++){
        for(int j=0;j<rows;j++){

            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
return 0;










}