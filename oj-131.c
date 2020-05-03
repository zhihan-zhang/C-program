/*************************************************************************
	> File Name: oj-131.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 19:54:19 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n,min = 1000000 ,max = 0,num;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&num);
        if (min > num) min = num;
        if (max < num) max = num;
    
    }
    int a = 2, b = 3;
    int c = (a = 2,b = 3);
    printf("%d",c);
    return 0;
}
