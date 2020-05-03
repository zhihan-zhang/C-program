/*************************************************************************
	> File Name: rand_test.c
	> Author: 
	> Mail: 
	> Created Time: 日  5/ 3 17:07:05 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int even = 0,oushu = 0;
    for(int i = 0; i < 10; i++){
        int val = rand() % 100;
        printf("%d ",val);
        even += (val & 1);
        oushu += !(val & 1);
    }
    printf("even = %d, oushu = %d",even,oushu);
    return 0;
}
