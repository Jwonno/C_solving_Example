/*�޸��� ��ġ ���*/

#include <stdio.h>
int global = 3; 
int main(){
    
    char *str="Hello, Baby";
    int i; //stack�� ����
    char arr[20] = "WHATTHEHECK"; //stack�� ����

    printf("global: %p\n",&global);
    printf("i: %p\n", &i);
    printf("str: %p\n",str);
    printf("arr: %p\n",arr); //i ���� ���߿� �߰� �� arr �� �ּҰ��� �� �۴�.
}