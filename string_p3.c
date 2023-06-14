//길이가 최대 100 인 문자열을 입력 받아서 소문자는 대문자로, 대문자는 소문자로 출력하는 함수를 만들어보세요.
#include<stdio.h>

void ch_case(char str[]);

int main(){
    char str[100];
    printf("Enter the sentence: ");
    scanf("%s",str);
    ch_case(str);
    return 0;
}

void ch_case(char str[]){
    char *r_str = str;
    while(*str){
        if(*str>95) *str-=32;
        else *str+=32;
        str++;
    }
    printf("%s",r_str);
}