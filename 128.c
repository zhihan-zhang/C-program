/*************************************************************************
	> File Name: 128.c
	> Author: 
	> Mail: 
	> Created Time: 三  4/29 22:04:18 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    double sum=0.00;
    int num[10001];
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&num[i]);
        sum += num[i];
    }
    double h = sum/n;
    printf("%.2lf", h);
    return 0;
}
