#include <stdio.h>

/*// void �� ������ ������ ��� ������ ������ ���� ������ �� �ִ�.
int main(){
    void *a;
    double b = 123.3;

    a = &b;

    printf("*a: %lf",*(double*)a); 
    //�ٸ� ���������� �� ���� ���� ���� ������ Ÿ���� ����������Ѵ�.
    //�� (double*)�� �տ� ���������ν� double ������ ������ ������ �ȴ�.
    return 0;
}*/


/*// ������ �ּҰ� p�� ���� byte �Ÿ���ŭ������ ������ �д� �Լ�
#include <stdio.h>
int read_char(void *p, int byte);
int main(){
    int arr[1] = {0x12345678};

    printf("%x\n",arr[0]);
    read_char(arr,4);
}

int read_char(void *p, int byte){
    do {
        printf("%x\n",*(char*)p); 
        //p�� ������ ������ char �� ������ �ּҰ����� �����������Ƿ� p�� +1�� �ϰ� �Ǹ�
        //char�� ũ��, �� 1�� �þ��. 
        byte--;

        p = (char*)p+1; 
    } while(p&&byte);

    return 0;
}
*/

//main �Լ��� ���� �� ���
#include <stdio.h>
int main(int argc, char **argv){
    //argc�� main �Լ��� ���� ������ ��, argv�� ���� main �Լ��� ���� ���ڵ��� ��Ÿ����.
    printf("���� ������ ����: %d\n",argc);
    //main �Լ��� ���α׷��� ���� ��θ� ���ڷ� �޴´�. ���� ���� ������ ������ 1 �̴�.
    printf("�� ���α׷��� ���: %s\n",argv[0]);
    //ù��° ���ڴ� ���α׷��� ���� ����̴�. ���� argv[0]�� ���� ��θ� ����Ѵ�.

    for(int i=0;i<argc;i++){
        printf("�� ���α׷��� ���� ���ڴ�: %s\n",argv[i]);
    }
    // cmd �͹̳� â���� ���α׷��� ��θ� �̹� ������ ���·�
    // '�����̸�.exe' '����1' '����2' �� �Է��ϸ�
    // �����̸�.exe, ����1, ����2 �� ���� ���ڰ� �ȴ�. 
    // ���� function_void.exe abc def �� �Է��ϸ� 
    // ������ ������ 3�̰� ������ ���ڴ� function_void.exe, abc, def �� ����� ���̴�.  
}
