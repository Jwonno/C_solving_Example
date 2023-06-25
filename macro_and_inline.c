#include <stdio.h>
/*//매크로 함수
#define square(x) ((x)*(x))
//#define 함수이름(인자) 치환할 것
#define RADTODEG(x) ((x)*57.295)
//전체를 () 로 감싸지 않으면 1/RADTODEG(5)와 같은 경우 1/5*57.295 의 값을 출력하므로 원하는 결과와 완전히 다른 결과를 도출해낸다. 
#define PrintVariableName(var) printf(#var "\n");
//어떠한 인자 앞에 #을 붙이면 문자열로 변환된다. 따라서 PrintVariableName(a) 는 printf("a" "\n"); 이 된다.
#define AddName(x, y) x##y
//x##y에서 ##은 x에 있는 것과 y에 있는 것을 하나로 합쳐준다.

int main(int argc, char **argv){
    printf("square(3): %d\n",square(3+1));
    printf("5 rad: %lf\n", RADTODEG(5));
    PrintVariableName(a);

    int AddName(a, b); //이 부분은 int ab; 와 동일하다.
    ab = 3;
    printf("%d \n",ab);

    return 0;
}*/

/*//인라인 함수
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
    //인라인 함수는 매크로 함수처럼 함수의 호출 과정을 생략한다.
    //하지만 매크로 함수와는 달리 우선순위를 고려하지 않고 전처리기가 단순하게 치환하지 않는다.
    // 따라서 square(1+3) 은 1*1+3*3이 아닌 (1+3)*(1+3) 이 된다.
    printf("MAX(3, 5): %d \n",max(3, 5));
    //컴파일러가 함수를 호출하여 작업하는 것의 비용과 치환하여 작업하는 것이 가능한지 여부를 고려하여 더 적은 비용이 드는 방법으로 작업을 진행한다.
    //위의 연산은 치환하여 가능하므로 컴파일러가 printf("MAX(3, 5): %d \n",3 > 5 ? 3 : 5); 으로 처리하였을 것이다.
    return 0;
}*/