/*************************************************************************
	> File Name: 101.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 10:27:04 2020
 ************************************************************************/

#include<stdio.h>
int is_number(int n){
    if(n < 10) return n;
    if(9< n&&n < 100) return n/10 + n % 10;

    if(99 < n&&n < 1000) return n / 100 + n % 10 + (n/10)%10;
    if(999 < n&&n < 10000) return n / 1000 + n % 10 + (n/10) % 10 + ( n/100 ) %10;
return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",is_number(n));
    return 0;
}
