/*************************************************************************
	> File Name: 151.c
	> Author: 
	> Mail: 
	> Created Time: 四  4/30 09:24:59 2020
 ************************************************************************/

#include<stdio.h>
int check(char a,char b){
    if( a == b ) return 0;
    if( (a == 'Y' && b == 'H') ||
        (a == 'O' && b == 'Y') ||
        (a == 'H' && b == 'O')) return 1;
    else return 2;
}
int main(){
    char ml,mr,hual,huar;
    scanf("%s%s%s%s",&ml,&mr,&hual,&huar);
    if(check ( ml, hual) == 1){
        if(check ( ml, huar !=2)) printf("MING");
        else {
            if(check( mr, huar) == 1) printf("MING");
            else printf("LIHUA");
        }
    }
    if(check(ml,hual) == 0) {
        if(check(mr,huar) == 1) printf("MING");
        if(check(mr,huar) == 0) printf("TIE");
        else printf("LIHUA");
    }
    if(check(ml,hual) == 2){
        if(check(mr,hual) != 1) printf("LIHUA");
        if(check(mr,hual) == 1){
            if(check(mr,huar) != 2) printf("MING");
            else printf("LIHUA");
        }
    }
    return 0;
}
