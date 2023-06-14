#include <stdio.h>

//문자열 복사하는 함수
int copy_str(char*dest, char*src){
    while(*src){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; //0, (char)NULL
    return 1;   //정상적으로 복사되면 1을 반환
}

//문자열 합치는 함수
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

//문자열 비교하는 함수
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