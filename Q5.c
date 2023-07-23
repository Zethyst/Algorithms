// Lab1.1 24/07/2023
#include <stdio.h>

void readMatrix(int matrix_646[3][3])
{
    printf("Enter the elements of the 3 x 3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix_646[i][j]);
        }
    }
}

void displayMatrix(int matrix_646[3][3])
{
    printf("Elements of the 3 x 3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", matrix_646[i][j]);
        }
        printf("\n");
    }
}

int countNonZeroElements(int matrix_646[3][3])
{
    int count_646 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix_646[i][j] != 0)
            {
                count_646++;
            }
        }
    }
    return count_646;
}

int sumAboveDiagonal(int matrix_646[3][3])
{
    int sum_646 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            sum_646 += matrix_646[i][j];
        }
    }
    return sum_646;
}

void displayBelowMinorDiagonal(int matrix_646[3][3])
{
    printf("Elements below the minor diagonal:\n");
    for (int i = 1; i < 3; i++)
    {
        for (int j = 3-i; j < 3; j++)
        {
            printf("%d ", matrix_646[i][j]);
        }
        printf("\n");
    }
}

int productOfDiagonalElements(int matrix_646[3][3])
{
    int product_646 = 1;
    for (int i = 0; i < 3; i++)
    {
        product_646 *= matrix_646[i][i];
    }
    return product_646;
}

int main()
{
    int matrix_646[3][3];

    readMatrix(matrix_646);
    displayMatrix(matrix_646);

    int nonZeroCount_646 = countNonZeroElements(matrix_646);
    printf("Number of nonzero elements: %d\n", nonZeroCount_646);

    int sumAboveDiag_646 = sumAboveDiagonal(matrix_646);
    printf("Sum of elements above the leading diagonal: %d\n", sumAboveDiag_646);

    displayBelowMinorDiagonal(matrix_646);

    int productDiag_646 = productOfDiagonalElements(matrix_646);
    printf("Product of the diagonal elements: %d\n", productDiag_646);

    return 0;
}
