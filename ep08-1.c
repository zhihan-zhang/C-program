/*************************************************************************
	> File Name: ep08-1.c
	> Author: 
	> Mail: 
	> Created Time: 二  5/ 5 20:07:15 2020
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define n 1000
char num[n + 5];
int main(){
    int len = 0;
    while(~scanf("%s",num + len)) len += strlen(num + len);
    int ans = 0, p = 1, zero = 0;
    for (int i = 0; num[i]; i++) {
        num[i] -= '0';
        
    }
    return 0;
}
