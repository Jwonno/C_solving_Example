#include <stdio.h>

int global = 0; 
// ���� ������ ���� �����ʹ� �޸� �޸��� ������ ����(Data segment)�� �Ҵ� ��.
//����� ��� ���������� ���� �� �ڵ����� 0���� �ʱ�ȭ ��.

int function() {
    global++;
    return 0;
}

int main(){
    global = 10;
    function();
    printf("global = %d",global);
    return 0;
}