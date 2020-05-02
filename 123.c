/*************************************************************************
	> File Name: 123.c
	> Author: 
	> Mail: 
	> Created Time: 四  4/30 23:07:48 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    double a,c,b,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    if( a >= c && b <= d ) printf("YES");
    else if( a<= c && b >= d ) printf("YES");
    
    else printf("NO");
    return 0;
}
