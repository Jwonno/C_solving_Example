//���̰� �ִ� 100 �� ���ڿ��� �Է� �޾Ƽ� �ҹ��ڴ� �빮�ڷ�, �빮�ڴ� �ҹ��ڷ� ����ϴ� �Լ��� ��������.
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