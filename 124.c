/*************************************************************************
	> File Name: 124.c
	> Author: 
	> Mail: 
	> Created Time: 四  4/30 09:17:05 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    int year,grade,old,work;
    scanf("%d%d%d%d",&year,&grade,&old,&work);
    if(work >= 5 || old <=25){
        if(grade <=50 || year > 0){
            printf("ok");

        }
        else printf("pass");
    }
    else printf("pass");

    return 0;
}
