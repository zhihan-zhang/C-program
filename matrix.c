/*************************************************************************
	> File Name: matrix.c
	> Author: 
	> Mail: 
	> Created Time: 一  4/27 18:59:23 2020
 ************************************************************************/

#include<stdio.h>
#include <stdio.h>

int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int final[10][10];
    int m,n,sum;
    int i,j;
    scanf("%d%d",&m,&n);
    for(int i=0; i < m; i++){
        for(int j=0; i < n; j++){
            scanf("%d",&matrix_a[i][j]);
        }
    }
	 for( i=0; i < n; i++){
        for( j=0; i < m; j++){
            scanf("%d",&matrix_b[i][j]);
        }
    }
    
    for(i=0; i < m; i++){
        for(j=0; j < m; j++){
            for(int k=0; k < n; k++){
                sum += matrix_a[i][k]*matrix_b[k][j];
            }
            final[i][j] = sum;
            sum = 0;
        }
    }
       for(i=0; i < m; i++){
        for(j=0; j < m; j++){
          
           printf("%d",final[i][j]);
           
        }
    }
   

    return 0;
}
