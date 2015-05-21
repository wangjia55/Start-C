/*
用二维数组实现矩阵的转置
*/

#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    int matrixA[ROW][COL] , matrixB[COL][ROW];

    int i , j ;
        
    for(i = 0 ; i < ROW ; i++){
        for( j = 0 ; j<COL ;j++){
            scanf("%d",&matrixA[i][j]);
        }    
    }
    
    printf("The origin Matrix is :\n");

    for(i = 0 ; i < ROW ; i++){
        for( j = 0 ; j<COL ;j++){
            printf("%d,",matrixA[i][j]);
        }    
        printf("\n");
    }

    for(i = 0 ;i< COL ; i++){
        for( j = 0 ; j< ROW ; j++){
            matrixB[i][j] = matrixA[j][i];
        }
    }

    printf("After Change Matrix is :\n");

    for(i = 0 ;i< COL ; i++){
        for( j = 0 ; j< ROW ; j++){
             printf("%d,",matrixB[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}
