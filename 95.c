/*************************************************************************
	> File Name: 95.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 09:50:36 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int number,ten,one;
    scanf("%d",&number);
    ten = number / 10;
    one = number % 10;
    printf("%d",ten + one * 10);
    return 0;
}
