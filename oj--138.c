/*************************************************************************
	> File Name: oj--138.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 20:32:47 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = n; i > 0; i--){
        for(int j = 1; j < 2*i; j++)
        {
            printf("A");
        }printf("\n");
    }
    return 0;
}
