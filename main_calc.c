/*�����Լ��� ���ڸ� Ȱ���� ���⸦ ��������.
���� �� calc.exe 5 + 10 �� ġ�� 
15 �� ������ �ϸ� ������.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    int digit=0, num1=0, num2=0, sum, sub, mul, div;
    //num1 ���ϱ�
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
    //num2 ���ϱ�
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
    printf("��� ����� %d �̴�.\n",sum);
}