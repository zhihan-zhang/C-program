/*************************************************************************
	> File Name: 109.c
	> Author: 
	> Mail: 
	> Created Time: 二  4/28 13:21:14 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for( ; n!=0 ;n = n/10){
        if((n%10) % 2 == 0) {
        printf("YES");
            return 0;
        }    }
        printf("NO");
    return 0;
}
