/*************************************************************************
	> File Name: oj-124.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 18:34:39 2020
 ************************************************************************/

#include<stdio.h>
int check(int a,int b,int c, int d){
    return (b <= 50 || a >= 1)&&(c <= 25 || d >= 5);

}
int main(){
    int a,c,b,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%s\n",check(a,b,c,d) ? "ok" : "pass");
    return 0;
}
