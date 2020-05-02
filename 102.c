/*************************************************************************
	> File Name: 102.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 10:55:14 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int a,c,b,n;
    double answer;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    double before = 1.0/a + 1.0/b;
    double m = 1.0/c;
    if(n* before > 1) answer = 1/ before ;

    else answer = n + (1 - (before)*n)/(before - m) ;
    printf("%.2lf",answer);
    return 0;
}
