//typedef
/*//구조체에서 사용한 루저와 위너 판별코드
#include <stdio.h.>
enum{MALE, FEMALE};
struct HUMAN{       
    int age;                      
    int height;                  
    int weight;
    int gender;
};
typedef struct HUMAN Human;        
//typedef (이름을 새로 부여하고자 하는 타입) (새로 준 타입의 이름)
//즉 이름을 새로 부여하고자 하는 타입은 'struct Human' 이고, 새로 준 타입의 이름은 'human' 이다.
//따라서 struct Human 대신에 Human만 쓸 수 있다. 물론 기존의 struct Human 을 사용하는 것도 가능하다.

int Print_Status(Human human);

int main(){
    Human Adam = {31, 152, 75, MALE};
    Human Eve = {27, 166, 48, FEMALE};

    Print_Status(Adam);
    Print_Status(Eve);

    return 0;
}

int Print_Status(Human human){
    if(human.gender == MALE) printf("Male \n");
    else printf("Female \n");

    printf("AGE: %d, Height: %d, Weight: %d \n", human.age, human.height, human.weight);

    if(human.gender == MALE){
        if(human.height>=180) printf("He is a Winner!!!\n");
        else printf("He is a Loser!!!\n");
    }
    printf("-----------------------------\n"); 

    return 0;
}*/

/*//계산기 프로그램
#include <stdio.h>
int main(){
    int input;
    int a, b;

    while(1){
        printf("-----Calculator-----\n");
        printf("1. Summation\n");
        printf("2. subtraction\n");
        printf("3. End Program\n");

        scanf("%d",&input);

        if(input == 1){
            printf("You choose 1.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a+b);
        }
        else if(input == 2){
            printf("You choose 2.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a-b);
        }
        else if(input == 3){
            printf("Thank you, bye");
            break;
        }
        else {
            printf("Wrong number.\n");
            printf("enter the number again.\n\n");
        }
    }
}*/
// 만약 컴퓨터의 cpu가 32비트 연산이 가능하지 않고 오직 16비트 이하의 비트연산만 가능하다고 하면 int 형의 모든 변수들의 변수형을 char이나 short로 바꿔주어야한다.
// 그런데 다른 기종의 컴퓨터는 int 형 사용이 가능하다고 하자
// 그렇다면 변수들의 변수형을 하나하나 바꿔주는 것은 상당히 비효율적이므로 다음과 같이 typedef를 이용하면 효율적으로 바꿀 수 있다.
/*//향상된 계산기 프로그램
#include <stdio.h>
typedef int CAL_type;   //이 라인의 int만 char이나 short으로 바꾸면 CAL_type 형의 모든 변수들을 int에서 char이나 short으로 바꿔줄 수 있다. 
int main(){
    CAL_type input;
    CAL_type a, b;

    while(1){
        printf("-----Calculator-----\n");
        printf("1. Summation\n");
        printf("2. subtraction\n");
        printf("3. End Program\n");

        scanf("%d",&input);

        if(input == 1){
            printf("You choose 1.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a+b);
        }
        else if(input == 2){
            printf("You choose 2.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a-b);
        }
        else if(input == 3){
            printf("Thank you, bye");
            break;
        }
        else {
            printf("Wrong number.\n");
            printf("enter the number again.\n\n");
        }
    }
}*/

/*//여러가지 typedef 예제들
#include <stdio.h>
int add(int a, int b){ return a+b; }
typedef int CAL_TYPE;
typedef int (*Padd)(int, int);
typedef int Arrays[10];
int main(){
    CAL_TYPE a =10;
    Arrays arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};        // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; (equivalent expression)
    Padd ptr = add;                                     //int (*ptr)(int, int) = add; (equivalent expression)
    printf("a: %d\n",a);
    printf("arr[3]: %d\n",arr[3]);
    printf("add(3, 5): %d",ptr(3,5));

    return 0;
}*/


//volatile (외부 하드웨어와 통신할 때 사용)
/*#include <stdio.h>
typedef struct SENSOR{
    //감지 되면 1, 감지 안되면 0 이다.
    int sensor_flag;
    int data;
}SENSOR;            //typedef struct SENSOR SENSOR; (equivalent expression)

int main(){
    SENSOR *sensor;
    //값이 감지되지 않는 동한 무한 while loop
    while(!(sensor->sensor_flag)){
        printf("Data: %d\n",sensor->data);
    }
}
//위와 같은 가상의 코드를 짜면, 보통의 상황에서는 sensor_flag의 값이 변하지 않으므로 
//컴파일러는 값을 딱 한 번만 읽고 0 이 아니라면 그냥 가고, 0 이라면 while 문을 무한히 돌리는 것으로 생각해버린다.
//결국, 컴파일러는 자동으로 최적화하여 다음과 같은 코드로 만들어버린다.
#include <stdio.h>
typedef struct SENSOR{
    
    int sensor_flag;
    int data;
}SENSOR;            

int main(){
    SENSOR *sensor;
    if(!(sensor->sensor_flag)){
        while(1){}
    }
    printf("Data: %d\n",sensor->data);
}
//따라서 이를 방지하기위한 방법들이 나왔는데
//첫번째로 최적화 옵션을 끄는 것인데, 이는 다른 코드들의 최적화도 생략하겠다는 것으로 손실이 크다. 
//그래서 생겨난 방법이 volatile 키워드를 사용하는 것이다.
#include <stdio.h>
typedef struct SENSOR{
    
    int sensor_flag;
    int data;
}SENSOR;            

int main(){
    volatile SENSOR *sensor;            //sensor에 대해서는 최적화 작업을 수행하지 않는다.
    
    while(!(sensor->sensor_flag)){
        printf("Data: %d\n",sensor->data);
    }
}
//volatile 은 '변덕스러운' 이라는 뜻으로 sensor->sensor_flag 의 값이 '변덕스럽게' 변할 수 있으니 최적화 작업을 수행하지 말라는 의미이다.*/


//#pragma (컴파일러에게 말하는 전처리기 명령어)
/*//#pragma pack
#include <stdio.h>
struct Weird {
    char arr[2];
    int i;
};

int main(){
    struct Weird a;
    printf("size of a: %d\n",sizeof(a));
    return 0;
}
//char 형 변수가 arr[0], arr[1]로 2개, int 형 변수가 1개이므로 1+1+4로 예상한 출력결과는 6이지만, 실제로 출력된 결과는 8이다.
//왜냐하면 실제로 메모리 상에서 위 구조체의 크기를 8 바이트로 컴파일러가 지정하였기 때문이다,
//현재 우리가 사용하는 컴퓨터에서는 언제나 4 바이트 단위로 모든 것을 처리하는 것이 빠르기에
//언제나 컴퓨터에서 데이터를 보관할 때 에는 4의 배수로 데이터를 보관하는 것이 처리시 용이하다.
//이렇게 데이터가 4 의 배수 경계에 놓인 것을 "더블 워드 경계에 놓여 있다." 라고 한다.
//컴파일러로 하여금 구조체를 더블 워드 경계에 놓지 말라고 하고 싶을 때 바로 pragma 키워드를 이용한다.
#include <stdio.h>
#pragma pack(1)     //구조체를 1 바이트 단위로 정렬하라는 명령이다. 즉, 구조체의 크기가 1 의 배수가 되게 하라는 것 (마이크로소프트 계열의 컴파일러에게만 유효한 명령)
struct Weird {
    char arr[2];
    int i;
};

int main(){
    struct Weird a;
    printf("size of a: %d",sizeof(a));
    return 0;
}*/
/*//#pragma once 
//위의 Weird구조체 내용이 담긴 Weird.h 헤더파일을 만들어놓자
#include <stdio.h>
#include "weird.h"
#include "weird.h" //이렇게 헤더파일을 두 번 포함하면 컴파일에러가 발생한다.
int main(){
    struct weird a;
    a.i = 3;
    printf("a.i of weird struct:  %d\n",a.i);
    return 0;
}
//이를 방지하기위한 방법으로 먼저 C의 기본 전처리기 명령어 #ifndef 와 #define 을 이용하는 방법이 있다.
//modified 'weird.h'
#ifndef WEIRD_H      //처음 "weird.h" 를 포함하면 #ifndef WEIRD_H 가 참이 되어 아래 코드를 모두 C 소스파일에 복사하는데,
#define WEIRD_H      //WEIRD_H를 정의하면서 나중에 다시 "weird.h" 를 포함하면 #ifndef WEIRD_H 가 거짓이 되어 아래 코드 내용을 건너뛰고 #endif로 넘어간다.
struct weird{
    int arr[2];
    int i;
};
#endif 

//다음으로는 #pragma once를 이용하는 방법이다.
//modified 'weird.h'
#pragma once
struct weird{
    char arr[2];
    int i;
}; 
//이 명령은 컴파일러로 하여금 이 파일이 오직 딱 한 번만 include 될 수 있게 만든다.*/