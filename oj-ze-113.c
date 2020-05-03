/*************************************************************************
	> File Name: oj-ze-113.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 19:28:09 2020
 ************************************************************************/

#include<stdio.h>
int is_days(int year,int month){
    int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    mon[2]++;
    return mon[month];
}
int main(){
    int year,month;
    scanf("%d%d",&year,&month);
    printf("%d",is_days(year,month));
    return 0;
}
