/*************************************************************************
	> File Name: oj-2.c
	> Author: 
	> Mail: 
	> Created Time: 二  5/ 5 18:14:06 2020
 ************************************************************************/

#include<stdio.h>
#define max_n 44
#define max_m 4000000
int fib[max_n + 5];
int main(){
    int n;
    fib[0] = 1;
    fib[1] = 2;
    n = 3;
    while(fib[n - 1] + fib [n - 2] < max_m){
        fib[n] = fib[n - 1] + fib[n - 2];
        n++;
    }
    long long sum = 0;
    for(int i = 0; i < n; i++){
        if(fib[i] & 1) continue;
        sum += i;
    }
    printf("%lld",sum);
    
    return 0;
}
