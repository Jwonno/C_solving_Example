#include <stdio.h>

int global = 0; 
// 전역 변수는 지역 변수와는 달리 메모리의 데이터 영역(Data segment)에 할당 됨.
//참고로 모든 전역변수는 정의 시 자동으로 0으로 초기화 됨.

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