/*************************************************************************
	> File Name: 90.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 09:30:14 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int hundred,ten,one;
    one = number % 10;
    ten = (number % 100) / 10;
    hundred = number / 100;
    printf("%d\n%d\n%d",hundred,ten,one);
    return 0;
}
