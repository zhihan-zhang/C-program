/*************************************************************************
	> File Name: 100.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 10:12:27 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,i;
    double money;
    scanf("%d",&n);
    money = n * 1.00417;
    for( i = 2; i < 7; i++ ){
        money = money*1.00417 + n* 1.00417; 
    }
    printf("$%.2lf",money);
    return 0;
}
