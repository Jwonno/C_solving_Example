//길이가 최대 100 인 문자열을 하나 입력 받아서 문자열을 역순으로 출력하는 함수를 만들어보세요.
#include <stdio.h>

void reverse_str(char str[]);

int main(){
    char str[100];
    printf("Enter the sentence: ");
    scanf("%s", str);
    reverse_str(str);
    return 0;
}

void reverse_str(char str[]){
    int length=0;
    char r_str[100];
    while(str[length]){
        length++;
    }
   for(int i=1;i<=length;i++){
    r_str[i-1]=str[length-i];
   }
   r_str[length] = '\0';
   printf("%s",r_str);
}