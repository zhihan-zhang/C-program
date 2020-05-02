/*************************************************************************
	> File Name: 04_PI.c
	> Author: 
	> Mail: 
	> Created Time: 三  4/29 23:44:01 2020
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int m = 0, n = 0;
    for (int i = 0; i < 10000000; i++){
        srand(time(0));
        double x = 1.0 * rand() % 1;
        double y = 1.0 * rand() /RAND_MAX;
        if (x * x + y * y <= 1.0) m+=1;
        n ++;
    }
    printf("%d\n",n);
    printf("%lf\n", 4.0 * m / n);
    return 0;
}
