/*파일에서 입력받기 (fgets 로 a.txt 에서 내용을 입력 받는다.)*/
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","r");
    //"r" 의 의미는 읽기 형식으로 파일을 열겠다는 의미이다.
    char buf[20];       //내용을 입력받을 곳
    if(fp == NULL){
        printf("READ ERROR!!\n");
        return 0;
    }
    fgets(buf,20,fp);
    //fgets 의 첫번째 인자에는 어디에 입력을 받을지를 전달하고
    //두번째 인자에는 입력받을 바이트 수를 전달하고
    //세번째 인자에는 어떤 스트림을 통해 입력받을지를 전달한다.
    //fgets 의 장점으로 입력받는 양을 제한할 수 있기에 오버플로우를 방지할 수 있다는 점이다.  
    printf("입력받는 내용: %s \n",buf);
    fclose(fp);
    return 0;
}*/
/* 한 글자씩 입력받기 */
/*#include <stdio.h>

int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","r");
    char c;

    while((c = fgetc(fp)) != EOF){      //fgetc 는 fp 에서 문자 하나를 얻어온다. 
        //즉 한 문자씩 읽어들이는데, 호출할 때마다 다음 문자로 넘어간다.
        //문자열 맨 마지막이 NULL 문자로 종료를 나타내는 것처럼
        //파일의 맨 마지막에는 EOF라고 End Of File 을 나타내는 값인 -1 이 들어가 있다.
        //실제로 EOF의 원형을 찾아보면 -1 로 선언되어있다.
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}*/

/*EOF 와 fgetc 를 이용하여 파일의 크기 알아내기*/
#include <stdio.h>

int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","r");
    int size=0;
    while(fgetc(fp)!=EOF) {size++;}
    printf("The size of this file: %d bytes\n",size);
    fclose(fp);
    return 0;
}