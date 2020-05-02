/*************************************************************************
	> File Name: 114.c
	> Author: 
	> Mail: 
	> Created Time: 二  4/28 13:40:28 2020
 ************************************************************************/

#include<stdio.h>
int main(){
    char x;
    scanf("%s",&x);
    switch(x){
        case 'h':{printf("He"); break;}
        case 'l':{printf("Li"); break;}
	 	case 'c':{printf("Cao"); break;}
		case 'd':{printf("Duan"); break;}
		case 'w':{printf("Wang"); break;}
		default:{printf("Not Here");} 

    }
    return 0;
}
