//���̰� �ִ� 100 �� ���ڿ��� �ϳ� �Է� �޾Ƽ� ���ڿ��� �������� ����ϴ� �Լ��� ��������.
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