// this program prints the sum of each row and coloumn of a matrix inputted by the user



#include<stdio.h>
int main(){
    printf("Enter the rows of the matrix\n");
    int row,col;
    scanf("%d",&row);
    printf("Enter the coloumns of the matrix\n");
    scanf("%d",&col);

    int mat[row][col];
    printf("Enter values into the matrix\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mat[i][j]);

        }
    }


    
    for(int i=0;i<row;i++){
        int sum=0;
        int sum2=0;


        for(int j=0;j<col;j++){
            sum=sum+mat[i][j];

            sum2=sum2+mat[j][i];



        }
        printf("the sum of row %d is %d\n",i+1,sum);
        printf("the sum of coloumn is %d\n",sum2);

    }
    return 0;
    

}