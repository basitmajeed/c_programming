//Find product of two matrices.

#include <stdio.h>

int main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3] ={0}, sum =0;
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
        for(int j = 0; j<3; j++)
        {
            for(int k = 0; k<3;k++)
            {
                mat3[i][j]+= mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    for(int i = 0; i <3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}