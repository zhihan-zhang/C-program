/*************************************************************************
	> File Name: 142.c
	> Author: 
	> Mail: 
	> Created Time: 六  5/ 2 22:35:16 2020
 ************************************************************************/

#include<stdio.h>
int is_val(int i){
    int temp = i, num = 0;
    while(temp){
    num = temp % 10 + num * 10;
    temp /= 10;    
}
    return num == i;
}
int main(){
    int min,max;
    int flag;
    int end[199];
    int i;
    scanf("%d%d",&min,&max);
    for( i = min; i <= max; i++){
        if(is_val(i)){
            for(int s = 2; s * s <= i; s++){
                if(i % s == 0) int 
               
            }
            printf("%d ",i);

        }
    }
    return 0;
}
