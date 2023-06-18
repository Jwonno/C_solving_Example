#include <stdio.h>
/*
//함수내의 지역변수
void function(){
    int a = 2; 
}
int main(){
    int a = 3;
    function();

    printf("a=%d",a); 
    //function 함수내의 a와 main 함수내의 a는 서로 다른 지역변수이므로 a = 3 을 출력한다.
}
*/

/*
//중괄호내의 지역 변수
int main(){
    int a = 3;
    {
        int a = 4;
        printf("a = %d",a); 
        // 중괄호에 의해 재정의가 가능하다 따라서 a = 4 가 출력된다. 
    }
    printf("a = %d",a);
    //중괄호에 의한 지역변수는 중괄호 내에서만 생존하므로 main 함수내의 지역변수에 의해 a = 3 이 출력된다.
}
*/
