/*************************************************************************
	> File Name: ep.z.04.c
	> Author: 
	> Mail: 
	> Created Time: 六  5/ 2 19:32:00 2020
 ************************************************************************/

#include<stdio.h>
int is_val( int n ){
    int temp = n,num = 0 ;
    while(temp){
        num = num * 10 + temp % 10;
    }
    return num == n;

    
}
int main(){
    int ans;
    for(int a = 100; a < 1000; a++){
        for(int b = 100; b < 1000; b++)
        {if(is_val(a*b)) ans = a * b;
        printf("%d",ans);
    }
    }
    return 0;
}
