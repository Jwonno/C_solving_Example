/*���̺귯���� ���*/
#include <stdio.h>
#include <string.h> //���ڿ� ���̺귯��

int main(){
    char str1[20] = {"hi"};
    char str2[20] = {"hello every1"};
    char str3[20] = {"hi"};

    strcpy(str1, str2); //���ڿ��� �����ϴ� �Լ�

    printf("str1: %s\n\n", str1);
    //strcmp(parameter1, parameter2): �� ���ڿ��� ���Ͽ� �����ϸ� 0��, �ٸ��� 1�� ����ϴ� �Լ�
    if(!strcmp(str1, str2)) printf("%s and %s is equal\n",str1, str2); 
    else printf("%s and %s is not equal\n",str1, str2);

    if(!strcmp(str1, str3)) printf("%s and %s is equal\n",str1, str3);
    else printf("%s and %s is not equal\n",str1, str3);

    return 0;
}