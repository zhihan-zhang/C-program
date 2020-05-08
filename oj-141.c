/*************************************************************************
	> File Name: oj-141.c
	> Author: 
	> Mail: 
	> Created Time: 一  5/ 4 09:18:56 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n + 1; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for (int j = i; j < n + 1; j ++){
            printf("%c",(char) ('A' + j));
        }
        for (int j = n - 1; j >= i; j--){
            printf("%c",(char) ('A' + j));
        }
        printf("\n");
    }
	
	for (int i = n - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for (int j = i; j < n + 1; j ++){
            printf("%c",(char) ('A' + j));
        }
        for (int j = n - 1; j >= i; j--){
            printf("%c",(char) ('A' + j));
        }
        printf("\n");
    }
    return 0;
}
