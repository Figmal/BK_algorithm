#include<stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    
    if((y%4==0 && y%100!=0) || y%400==0 ) printf("1");
    else printf("0");
    
    
}
//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.