/*************************************************************************
	> File Name: oj-128.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 19:45:36 2020
 ************************************************************************/

#include<stdio.h>
#include<stdio.h>
int main(){
    int n,sum = 0,num;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&num);
        sum += num;
    }
    printf("%.2lf",1.0 * sum / n );
    return 0;
}
