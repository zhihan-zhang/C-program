/*************************************************************************
	> File Name: 126.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 09:46:13 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    double rbig,rsmall;
    
    scanf("%lf%lf",&rbig,&rsmall);
    printf("%.2lf",3.14*(rbig*rbig - rsmall * rsmall));

    return 0;
}
