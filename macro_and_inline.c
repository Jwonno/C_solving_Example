#include <stdio.h>
/*//��ũ�� �Լ�
#define square(x) ((x)*(x))
//#define �Լ��̸�(����) ġȯ�� ��
#define RADTODEG(x) ((x)*57.295)
//��ü�� () �� ������ ������ 1/RADTODEG(5)�� ���� ��� 1/5*57.295 �� ���� ����ϹǷ� ���ϴ� ����� ������ �ٸ� ����� �����س���. 
#define PrintVariableName(var) printf(#var "\n");
//��� ���� �տ� #�� ���̸� ���ڿ��� ��ȯ�ȴ�. ���� PrintVariableName(a) �� printf("a" "\n"); �� �ȴ�.
#define AddName(x, y) x##y
//x##y���� ##�� x�� �ִ� �Ͱ� y�� �ִ� ���� �ϳ��� �����ش�.

int main(int argc, char **argv){
    printf("square(3): %d\n",square(3+1));
    printf("5 rad: %lf\n", RADTODEG(5));
    PrintVariableName(a);

    int AddName(a, b); //�� �κ��� int ab; �� �����ϴ�.
    ab = 3;
    printf("%d \n",ab);

    return 0;
}*/

/*//�ζ��� �Լ�
__inline int square(int a){
    return a*a;
}
__inline int max(int a, int b){
    if(a>b){
        return a;
    }
    else return b;
}

int main(int argc, char **argv){
    printf("%d \n",square(3));
    //�ζ��� �Լ��� ��ũ�� �Լ�ó�� �Լ��� ȣ�� ������ �����Ѵ�.
    //������ ��ũ�� �Լ��ʹ� �޸� �켱������ ������� �ʰ� ��ó���Ⱑ �ܼ��ϰ� ġȯ���� �ʴ´�.
    // ���� square(1+3) �� 1*1+3*3�� �ƴ� (1+3)*(1+3) �� �ȴ�.
    printf("MAX(3, 5): %d \n",max(3, 5));
    //�����Ϸ��� �Լ��� ȣ���Ͽ� �۾��ϴ� ���� ���� ġȯ�Ͽ� �۾��ϴ� ���� �������� ���θ� ����Ͽ� �� ���� ����� ��� ������� �۾��� �����Ѵ�.
    //���� ������ ġȯ�Ͽ� �����ϹǷ� �����Ϸ��� printf("MAX(3, 5): %d \n",3 > 5 ? 3 : 5); ���� ó���Ͽ��� ���̴�.
    return 0;
}*/