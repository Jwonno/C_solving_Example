#include <stdio.h>
//����ü
/*
union A{
    int i;
    char j;
};
//����ü�� ����ü�� �޸� �޸𸮸� �����Ѵ�. 
//�� �� ����� ���� �����ϸ� �ٸ� ����� ���� �ٲ��.

union B{
    int i;
    short j;
};

int main(){
    //����_1
    union A a;
    a.i = 0x12345678;
    printf("%x\n",a.j); 
    /��ǻ�Ϳ��� �޸𸮿� ���� ������ �� ���� �ּҰ��� ���� ��Ʈ�� ���� 
    //'��Ʋ �����' ����� ����ϹǷ� j���� 0x12�� �ƴ� 0x78�� ����ǰ� 78�� ����Ѵ�. 
    
    //����_2
    union B b;
    b.i = 0x12345678;
    printf("%x\n",b.j);
    //'��Ʋ �����' ��Ŀ� ���� ���� �ּҰ� ������� 1����Ʈ�� 78 56 ������ ������ �Ǵµ�
    //��ǻ�Ͱ� ���� ����� ���� �̸� ����Ͽ� �ٽ� ������ ��ȯ�Ͽ� 5678�� ����Ѵ�.
    return 0;
}*/
//������
/*
enum{RED, BLUE, WHITE, BLACK}; //RED = 0, BLUE = 1, WHITE = 2, BLACK = 3 �̴�.
int main(){
    int palette = RED;
    switch (palette){
        case RED:
        printf("palette: RED \n");
        break;
        case BLUE:
        printf("palette: BLUE \n");
        break;
        case WHITE:
        printf("palette: WHITE \n");
        case BLACK:
        printf("palette: BLACK \n");
    }
    return 0;
}

//ó�� ���� 0���� �����ϱ⸦ ��ġ �ʴٸ�
//���� 1
enum{RED = 3, BLUE, WHITE, BLACK}; //RED = 3, BLUE = 4, WHITE = 5, BLACK = 6
//���� 2
enum{RED = 3, BLUE, WHITE = 3, BLACK}; //RED = 3, BLUE = 4, WHITE = 3, BLACK = 4
//�� ���� �ٲ� �� �ִ�.
*/