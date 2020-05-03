/*************************************************************************
	> File Name: 443.c
	> Author: 
	> Mail: 
	> Created Time: 六  5/ 2 20:19:19 2020
 ************************************************************************/

#include<stdio.h>
int arr[max_n + 5] = {0};
void change_flag(int a,int b){
    for(int i = 0; i <= b; i++){
        arr[i] = 1;
    }
    return ;
}

int cnt_num(int l){
    int cnt = 0
}
int main(){
   int m,n;
    scanf("%d%d",&m,&n);
    for (int i = 0; i < n; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        change_flag(a,b);
    }
    printf("%d\n",cut_num(m));
    return 0;
}
