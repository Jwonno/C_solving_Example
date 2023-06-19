/*메인함수의 인자를 활용한 계산기를 만들어보세요.
예를 들어서 calc.exe 5 + 10 을 치면 
15 가 나오게 하면 되지요.*/
#include <stdio.h>
#include <stdlib.h>
int get_int(char *num);
int main(int argc, char **argv){
    int digit=1, num1=0, num2=0;
    //num1 구하기
    for(int i=1;argv[1][i];i++){
        digit*=10;
    }
    for(int index=0;argv[1][index];index++){
        num1+=digit*(argv[1][index]-48);
        digit/=10;
    }
    digit = 1;

    //num2 구하기
    for(int i=1;argv[3][i];i++){
        digit*=10;
    }
    for(int index=0;argv[3][index];index++){
        num2+=digit*(argv[3][index]-48);
        digit/=10;
    }
    
    if(argv[2][0]=='+'){
    printf("계산결과는 %d 이다.\n",num1+num2);
    }
    else if(argv[2][0]=='-'){
    printf("계산결과는 %d 이다.\n",num1-num2);
    }
    else if(argv[2][0]==42){
    printf("계산결과는 %d 이다.\n",num1*num2);
    }
    else if(argv[2][0]=='/'){
    printf("계산결과는 %d 이다.\n",num1/num2);
    }
    else printf("error");

    return 0;
}