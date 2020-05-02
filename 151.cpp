/*************************************************************************
	> File Name: 151.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  4/30 09:40:53 2020
 ************************************************************************/

#include<iostream>
using namespace std;

int check(char a,char b){
    if(a == 'Y' && b == 'H'|| 
       a == 'O' && b == 'Y'||
       a == 'H' && b == 'O' ) {
           return 1;
       }
    if(a == b) return 0;
    else return 2;
}
int main(){
    char ml,mr,ll,lr;
    cin >> ml >> mr >> ll >> lr;

    return 0;
}
