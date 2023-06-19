/*메인함수의 인자를 활용한 계산기를 만들어보세요.
예를 들어서 calc.exe 5 + 10 을 치면 
15 가 나오게 하면 되지요.*/
#include <stdio.h>
#include <stdlib.h>
int get_int(char *num);
int main(int argc, char **argv){
    int num1, num2;
    //num1 구하기
    num1 = get_int(argv[1]);
    //num2 구하기
    num2 = get_int(argv[3]);
    
    if(argv[2][0]=='+'){
    printf("계산결과는 %d 이다.\n",num1+num2);
    }
    else if(argv[2][0]=='-'){
    printf("계산결과는 %d 이다.\n",num1-num2);
    }
    else if(argv[2][0]=='*'){
    printf("계산결과는 %d 이다.\n",num1*num2);
    }
    else if(argv[2][0]=='/'){
    printf("계산결과는 %d 이다.\n",num1/num2);
    }
    else printf("error");

    return 0;
}

int get_int(char *num){
     int digit=1, integer=0;

    for(int i=1;num[i];i++){
        digit*=10;
    }
    for(int index=0;num[index];index++){
        integer+=digit*(num[index]-48);
        digit/=10;
    }
    return integer;
}