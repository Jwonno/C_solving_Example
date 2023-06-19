#include <stdio.h>

/*// void 형 포인터 변수는 어떠한 형태의 포인터 값을 저장할 수 있다.
int main(){
    void *a;
    double b = 123.3;

    a = &b;

    printf("*a: %lf",*(double*)a); 
    //다만 간접참조를 할 때는 위와 같이 데이터 타입을 지정해줘야한다.
    //즉 (double*)을 앞에 더해줌으로써 double 형식의 포인터 변수가 된다.
    return 0;
}*/


/*// 임의의 주소값 p로 부터 byte 거리만큼까지의 값들을 읽는 함수
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
        //p의 데이터 형식을 char 형 변수의 주소값으로 지정해줬으므로 p에 +1을 하게 되면
        //char의 크기, 즉 1씩 늘어난다. 
        byte--;

        p = (char*)p+1; 
    } while(p&&byte);

    return 0;
}
*/

//main 함수의 인자 및 경로
#include <stdio.h>
int main(int argc, char **argv){
    //argc는 main 함수가 받은 인자의 수, argv는 각각 main 함수가 받은 인자들을 나타낸다.
    printf("받은 인자의 개수: %d\n",argc);
    //main 함수는 프로그램의 실행 경로를 인자로 받는다. 따라서 받은 인자의 개수는 1 이다.
    printf("이 프로그램의 경로: %s\n",argv[0]);
    //첫번째 인자는 프로그램의 실행 경로이다. 따라서 argv[0]은 실행 경로를 출력한다.

    for(int i=0;i<argc;i++){
        printf("이 프로그램이 받은 인자는: %s\n",argv[i]);
    }
    // cmd 터미널 창에서 프로그램의 경로를 이미 지정한 상태로
    // '파일이름.exe' '인자1' '인자2' 를 입력하면
    // 파일이름.exe, 인자1, 인자2 가 각각 인자가 된다. 
    // 따라서 function_void.exe abc def 를 입력하면 
    // 인자의 개수는 3이고 각각의 인자는 function_void.exe, abc, def 로 출력할 것이다.  
}
