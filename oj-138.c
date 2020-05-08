/*************************************************************************
	> File Name: oj-138.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 20:29:55 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        for(int j =0; j < 2 * n - 2 *i; j++){
            printf("A");
        }printf("\n");
    }
    return 0;
}
