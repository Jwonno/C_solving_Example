#include <stdio.h>
//공용체
/*
union A{
    int i;
    char j;
};
//공용체는 구조체와 달리 메모리를 공유한다. 
//즉 한 멤버의 값을 수정하면 다른 멤버의 값도 바뀐다.

union B{
    int i;
    short j;
};

int main(){
    //예시_1
    union A a;
    a.i = 0x12345678;
    printf("%x\n",a.j); 
    /컴퓨터에서 메모리에 수를 저장할 때 낮은 주소값에 상위 비트를 적는 
    //'리틀 엔디안' 방식을 사용하므로 j에는 0x12가 아닌 0x78이 저장되고 78을 출력한다. 
    
    //예시_2
    union B b;
    b.i = 0x12345678;
    printf("%x\n",b.j);
    //'리틀 엔디안' 방식에 의해 낮은 주소값 순서대로 1바이트씩 78 56 순으로 저장이 되는데
    //컴퓨터가 값을 출력할 때는 이를 고려하여 다시 적절히 변환하여 5678을 출력한다.
    return 0;
}*/
//열거형
/*
enum{RED, BLUE, WHITE, BLACK}; //RED = 0, BLUE = 1, WHITE = 2, BLACK = 3 이다.
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

//처음 수를 0부터 시작하기를 원치 않다면
//예시 1
enum{RED = 3, BLUE, WHITE, BLACK}; //RED = 3, BLUE = 4, WHITE = 5, BLACK = 6
//예시 2
enum{RED = 3, BLUE, WHITE = 3, BLACK}; //RED = 3, BLUE = 4, WHITE = 3, BLACK = 4
//와 같이 바꿀 수 있다.
*/