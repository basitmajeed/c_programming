//Find sum of two matrices.

#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3];
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Matrix 1 [%d][%d]: ",i+1,j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Matrix 2 [%d][%d]: ",i+1,j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\n");
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}