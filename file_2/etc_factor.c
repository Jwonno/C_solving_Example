/*fopen() 함수의 'append' 기능 사용 */
/*#include <stdio.h>
int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","a");
    // "a" 는 덧붙이기(append) 형식으로 파일을 연다는 의미이다.
    // 기존의 "w" 는 파일의 내용이 모두 지워지는 대신에 맨 앞에서부터 내용이 쓰여졌는데
    // 덧붙이기 형식의 경우 기존 파일의 내용을 보호하여 맨뒤에서부터 내용이 들어간다.
    char c;
    if(fp==NULL){
        printf("failed to open...\n");
        return 0;
    }
    fputs("IS added something",fp);
    fclose(fp);
    return 0;
}
// "a+" 도 "w+", "r+" 와 마찬가지로 덧붙이기와 읽기가 모두 가능하다.*/

/* fscanf() 함수 */
/*#include <stdio.h>

int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r");
    char data[100];

    if(fp==NULL){
        printf("failed to open...\n");
        return 0;
    }

    printf("----Received inputs words----\n");

    while(fscanf(fp,"%s",data)!=EOF){
        // fscanf() 함수의 첫번째 인자로 입력을 받을 스트림을 써주고
        // 나머지 두 인자는 scanf() 함수와 동일하다.
        // 즉 fscanf(stdin, "%s", data); 와
        // scanf("%s",data); 는 정확히 일치하는 문장이다.
        // 따라서 fscanf() 함수는 scanf() 함수 보다 일반화된 함수라고 할 수 있다.

        // fgets() 함수는 '\n' 이 나올 때 까지 하나의 문자열로 보고 받아들이지만
        // fscanf() 함수는 띄어쓰기나 탭 문자 들 중 어느 하나가 나올 때 까지 입력 받으므로
        // 파일에서는 각 단어들을 하나씩 읽어들이게 된다.
        //즉 파일에 
        // abc def ghijk
        // 라는 내용의 텍스트 파일이 있으면 
        // 문자열 data에는 abc 가 저장이 되고 while() 문에 의해 다음엔 def, 그 다음엔 ghijk 가 저장이 된다.
        // 이제 fscanf() 가 더이상 새로운 데이터를 입력받을 수 없을 때,
        // 즉 파일의 끝에 도달하면 EOF 를 리턴한다.
        printf("%s\n",data);
    }
    fclose(fp);
    return 0;
}*/

/* 파일에서 'this' 를 'that' 으로 바꾸기 */
/*#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\some_data.txt","r+");
    char data[100];

    if(fp == NULL){
        printf("failed to open...\n");
        return 0;
    }

    while(fscanf(fp, "%s", data)!=EOF){
        if(strcmp(data, "this")==0){
            fseek(fp, -(long)strlen("this"), SEEK_CUR);     
            //strlen() 함수는 unsigend long 을 반환하는데 fseek() 함수는 size_t, 즉 long int 를 인자로 받는다. 
            //따라서 명시적으로 캐스팅(형변환)하지 않으면 컴파일러 오류가 발생한다.   
            fputs("that",fp);
            fflush(fp);
        }
    }

    fclose(fp);
    return 0;
}*/
