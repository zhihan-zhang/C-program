/*************************************************************************
	> File Name: 39.c
	> Author: 
	> Mail: 
	> Created Time: 六  5/ 2 10:51:14 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int begin,end;
    scanf("%d%d",&begin,&end);
    if(begin >=0){
    if(begin % 2 == 0) {
        for(int i = begin; i <= end; i+= 2) printf("%d\n",i);
    }
    else{
        for(int i = begin + 1; i <= end; i+=2) printf("%d\n",i);
    }}
    if(begin<0){
        for(int i = 0; i<= end; i+= 2){
            printf("%d\n",i);
        }
    }
    return 0;
}
