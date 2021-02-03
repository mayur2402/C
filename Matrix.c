#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **mat = NULL,**trans = NULL;
    int row = 0,col = 0,row1 = 0,col1 = 0,i = 0,j = 0,i1 = 0,j1 = 0;
    
    mat = (int **)malloc(sizeof(int *)*row);
    for(i = 0;i < row;i++)
    {
        mat[i] = (int *)malloc(sizeof(int)*col);
    }
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    trans = (int **)malloc(sizeof(int *)*col);
    for(i = 0;i < col;i++)
    {
        trans[i] = (int *)malloc(sizeof(int)*row);
    }
    
    for(i = 0,i1 = 0;i < row,i1 < col;i++,i1++)
    {
        for(j = 0,j1 = 0;j < col,j1 < row;j++,j1++)
        {
            trans[i1][j1] = mat[i][j];
            printf("%d\t",trans[i1][j1]);
        }
        printf("\n");
    }
    return 0;
}
