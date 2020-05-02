/*************************************************************************
	> File Name: E.2.c
	> Author: 
	> Mail: 
	> Created Time: 六  4/25 18:46:26 2020
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main(){
    int i = 1;
    int sum1,s1sum;
    sum1 =0 ;
    for (i = 1; i <= 100; i++){
        sum1 += sqrt(i);
    } 
    int sum  = (1+100) * 100 /2;
    s1sum = sqrt(sum);
    printf("%d",sum1 - s1sum);
    return 0;
}
