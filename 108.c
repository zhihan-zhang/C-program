/*************************************************************************
	> File Name: 108.c
	> Author: 
	> Mail: 
	> Created Time: 二  4/28 13:01:57 2020
 ************************************************************************/

#include<stdio.h>

int main(){
    char a;
    scanf("%s",&a);
    double x,y;
    scanf("%lf%lf",&x,&y);
    if(a =='t' ) printf("%.2lf",x*y/2);

    else printf("%.2lf",x*y);
    return 0;
}
