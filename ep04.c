/*************************************************************************
	> File Name: ep04.c
	> Author: 
	> Mail: 
	> Created Time: 六  5/ 2 19:25:49 2020
 ************************************************************************/

#include<stdio.h>
int is_val(int n){
    int x = 0, temp = n;
    while (temp){
        x = x * 10 + temp % 10;
        temp /= 10;
    }
    return x == n;
}
int main(){
    int ans = 0;
    for (int a = 100; a < 1000; a++){
        for(int b = a; b < 1000; b ++){
            if(is_val(a * b) && a * b > ans) ans = a * b;

        }
    }
    printf("%d\n",ans);
    return 0;
}
