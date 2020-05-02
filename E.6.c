/*************************************************************************
	> File Name: E.6.c
	> Author: 
	> Mail: 
	> Created Time: 六  4/25 18:52:30 2020
 ************************************************************************/


#include <stdio.h>
int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int is_check(int y, int m,int d){
	if(m <= 0 || d <= 0) return 0;
	if(m > 12 || d > 31) return 0;
	if((y % 4 == 0 && y %100 != 0) || y % 400 == 0) month[2] +=1;
	if(month[m] < d) return 0;
	return 1;
	
}
int main(){
	int y,m,d;
	scanf("%d%d%d",&y,&m,&d);
	printf("%s\n",is_check(y,m,d) ? "Yes" : "No");
		return 0;
}
