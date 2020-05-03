/*************************************************************************
	> File Name: 104.cpp
	> Author: 
	> Mail: 
	> Created Time: 六  5/ 2 19:50:56 2020
 ************************************************************************/

#include<iostream>
using namespace std;
int is_check(int n){
    int temp = n;
    while(temp){
        if(temp % 10 == 9) return 1;
        temp /= 10;
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    cout << (is_check(n) ? "YES": "NO" )<< endl;
}
