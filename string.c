#include <stdio.h>

//���ڿ� �����ϴ� �Լ�
int copy_str(char*dest, char*src){
    while(*src){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; //0, (char)NULL
    return 1;   //���������� ����Ǹ� 1�� ��ȯ
}

//���ڿ� ��ġ�� �Լ�
void combine_str(char dest[], char src[]){
    while(*dest){
            dest++;
        }
    while(*src){   
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

//���ڿ� ���ϴ� �Լ�
int compare(char *str1, char*str2){
    while(*str1||*str2){
        if(*str1==*str2){
            str1++;
            str2++;
        }
        else return 0;
    }
    return 1;
}

int main(){
  
    return 0;
}