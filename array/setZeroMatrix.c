// given a matrix. if a zero exists, set its whole row and column to zero.

#include <stdio.h>

void setZero(int [][4], int, int);

int main()
{
    int m[3][4] = {{0, 1, 3, 0}, {2, 5, 0,3}, {3,5,6,7}};
    int i, j;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d\t", m[i][j]);
        printf("\n");
    }
    printf("\n\n\n");

    
    setZero(m, 3, 4);
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d\t", m[i][j]);
    printf("\n");
    }
    
    return 0;
}

void setZero (int m[][4], int r, int c)
{
    int i, j;
    //int *flag = (int *) malloc sizeof(int * (m + n));
    int r_flag[3] = {0};
    int c_flag[4] = {0};
    
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if( m[i][j] == 0)
            {
                r_flag[i] = 1;		// the row i has zero
                c_flag[j] = 1;	// the row j has zero
            }
    
    for (i = 0; i < r; i++)
        if (r_flag[i] == 1)
            for(j = 0; j < c; j++)
                m[i][j] = 0;
    
    for (i = 0; i < c; i++)
        if (c_flag[i] == 1)
            for(j = 0; j < r; j++)
                m[j][i] = 0;
    
    return ;
    
}