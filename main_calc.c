/*�����Լ��� ���ڸ� Ȱ���� ���⸦ ��������.
���� �� calc.exe 5 + 10 �� ġ�� 
15 �� ������ �ϸ� ������.*/
#include <stdio.h>
#include <stdlib.h>
int get_int(char *num);
int main(int argc, char **argv){
    int num1, num2;
    //num1 ���ϱ�
    num1 = get_int(argv[1]);
    //num2 ���ϱ�
    num2 = get_int(argv[3]);
    
    if(argv[2][0]=='+'){
    printf("������� %d �̴�.\n",num1+num2);
    }
    else if(argv[2][0]=='-'){
    printf("������� %d �̴�.\n",num1-num2);
    }
    else if(argv[2][0]=='*'){
    printf("������� %d �̴�.\n",num1*num2);
    }
    else if(argv[2][0]=='/'){
    printf("������� %d �̴�.\n",num1/num2);
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