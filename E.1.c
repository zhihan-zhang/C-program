/*************************************************************************
	> File Name: E.1.c
	> Author: 
	> Mail: 
	> Created Time: 六  4/25 18:17:13 2020
 ************************************************************************/

#include<stdio.h>
int value(int n){
    return n % 3 == 0 || n % 5 == 0;
}
int main(){
    int sum = 0;
    for (int i = 1; i <+ 1000; i++){
        if(value(i)){
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
