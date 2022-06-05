#include <stdio.h>
int main()
{

    int i, j, row, col, temp;
    printf("Enter the number of rows for matrix\n");
    scanf("%d", &row);
    printf("Enter the number of columns for matrix\n");
    scanf("%d", &col);
    int mat[row][col], transpose[row][col];
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Element at mat[%d][%d]=", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    // transpose logic using same matrix but using an extra varible.
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    printf("The transpose of the matrix is\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
