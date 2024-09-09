//Find transpose of a matrix.

#include <stdio.h>

int main()
{
    int mat[3][3];
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter Element A[%d][%d] of matrix: ",i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}