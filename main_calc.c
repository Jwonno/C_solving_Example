/*메인함수의 인자를 활용한 계산기를 만들어보세요.
예를 들어서 calc.exe 5 + 10 을 치면 
15 가 나오게 하면 되지요.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int digit=0, num1=0, num2=0, sum, sub, mul, div;
    //num1 구하기
    for(int i=0;argv[1][i];i++){
        digit++;
    }
    digit--;
    if(digit==0) num1=*argv[1]-48;
    while(digit+1){
        int temp=1;
        for(int i=digit;i>0;i--){
            temp*=10;
        }
        num1+=temp*(argv[1][digit]-48);
        digit--;
    }
    digit = 0;
    //num2 구하기
    for(int i=0;argv[1][i];i++){
        digit++;
    }
    digit--;
    if(digit==0) num2=*argv[3]-48;
    while(digit+1){
        int temp=1;
        for(int i=digit;i>0;i--){
            temp*=10;
        }
        num2+=temp*(argv[3][digit]-48);
        digit--;
    }
    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    printf("계산 결과는 %d 이다.\n",sum);
}