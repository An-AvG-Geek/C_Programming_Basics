//program to multiply user given matrices

#include <stdio.h>
int main()
{
    int row1, row2, col1, col2;
    printf("Enter the number of rows of the first matrix\n");
    scanf("%d", &row1);
    printf("Enter the number of columns of the first matrix\n");
    scanf("%d", &col1);
    printf("Enter the number of rows of the second matrix\n ");
    scanf("%d", &row2);
    printf("Enter the number of coloumn of the second matrix\n ");
    scanf("%d", &col2);

    int mat1[row1][col1], mat2[row2][col2], mul[row1][col2];
    int key = 0;
    while (key == 0)
    {
        if (col1 != row2)
        {
            key = 1;
            printf("Matrix cannot be multiplied \n");
            break;
        }
        printf("Enter the elements of the first matrix\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("Enter the elements of the second matrix\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }

        // input completed ... of the two matrix

        // not starting to multiply

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                mul[i][j] = 0;

                for (int x = 0; x < row2; x++)
                {
                    mul[i][j] = mul[i][j] + (mat1[i][x] * mat2[x][j]);
                }
            }
        }




        // printting the new matrix
        printf("the new matrix after multiplication is \n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
        break;
    }

    return 0;
}