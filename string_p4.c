//�� ���� ���ڿ��� �Է� �޾Ƽ� ���ٸ� "����", �ٸ��� "�ٸ���" ��� ����ϴ� �Լ��� ��������.
#include <stdio.h>

int compare_str(char*str1, char*str2);

int main(){
    char str1[100];
    char str2[100];

    printf("Enter the first sentence: ");
    scanf("%s", str1);

    printf("Enter the second sentence: ");
    scanf("%s",str2);

    compare_str(str1, str2);

    return 0;
}

int compare_str(char*str1, char*str2){
    while(*str1||*str2){
        if(*str1!=*str2){
            printf("�ٸ���");
            return 0;
        }
        str1++;
        str2++;
    }
    printf("����");
    return 0;    
}
