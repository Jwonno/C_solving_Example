/*�����Լ��� ���ڸ� Ȱ���� ���⸦ ��������.
���� �� calc.exe 5 + 10 �� ġ�� 
15 �� ������ �ϸ� ������.*/
#include <stdio.h>
#include <stdlib.h>
int get_int(char *num);
int main(int argc, char **argv){
    int digit=1, num1=0, num2=0;
    //num1 ���ϱ�
    for(int i=1;argv[1][i];i++){
        digit*=10;
    }
    for(int index=0;argv[1][index];index++){
        num1+=digit*(argv[1][index]-48);
        digit/=10;
    }
    digit = 1;

    //num2 ���ϱ�
    for(int i=1;argv[3][i];i++){
        digit*=10;
    }
    for(int index=0;argv[3][index];index++){
        num2+=digit*(argv[3][index]-48);
        digit/=10;
    }
    
    if(argv[2][0]=='+'){
    printf("������� %d �̴�.\n",num1+num2);
    }
    else if(argv[2][0]=='-'){
    printf("������� %d �̴�.\n",num1-num2);
    }
    else if(argv[2][0]==42){
    printf("������� %d �̴�.\n",num1*num2);
    }
    else if(argv[2][0]=='/'){
    printf("������� %d �̴�.\n",num1/num2);
    }
    else printf("error");

    return 0;
}