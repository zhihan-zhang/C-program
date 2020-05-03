/*************************************************************************
	> File Name: oj-123.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 18:58:30 2020
 ************************************************************************/

#include<stdio.h>
int check(int a,int b,int c,int d){
    return (a <= c && b >= d) || (c <= a && d >= b);
}
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%s\n", check(a,b,c,d) ? "YES" : "NO");
}
