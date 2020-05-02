/*************************************************************************
	> File Name: 04_rando.c
	> Author: 
	> Mail: 
	> Created Time: 三  4/29 23:34:43 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("%d\n",rand() % 1000);
    srand(time(0));
    printf("%d\n",rand() % 1000);
    for (int i=0; i < 100; i++){
        printf("%d\n",rand() % 100);
    }
    return 0;
}
