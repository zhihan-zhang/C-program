/*************************************************************************
	> File Name: 101.2.c
	> Author: 
	> Mail: 
	> Created Time: 日  4/26 10:45:28 2020
 ************************************************************************/

#include<stdio.h>
int is_number(int n,int sum){
    if(n/10 == 0) return sum + n;

    return is_number(n/10,sum += n %10);

}
int main(){
    int n,sum;
    sum = 0;
    scanf("%d",&n);
    printf("%d",is_number(n,sum));
}
