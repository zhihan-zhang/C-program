/*************************************************************************
	> File Name: oj-142.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 20:49:41 2020
 ************************************************************************/

#include<stdio.h>
int is_prime(int n) {
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int is_rev(int i){
    int temp = i,sum = 0;
    while(temp){
        sum = sum * 10 + temp % 10;
        temp /= 10;
    }
    return sum == i;
    
}
int main(){
    int a,b;
    int flag = 0;
    scanf("%d%d",&a,&b);
    for (int i = a; i <= b; i++){
        if(is_rev(i) && is_prime(i)){
            (flag++) && printf(" ");
            printf("%d",i);
        }
    }
    return 0;
}
