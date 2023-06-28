//여태까지 파일에서 입력을 받을 때 언제나 파일의 시작 부분에서 끝 부분으로 입력을 쭉 받아 나갔다.
//즉 이전에 입력받았던 데이터는 다시 입력받지 않았는데 이것이 가능한 이유는 파일 위치 지정자 때문이다.
/*#include <stdio.h>
int main(){
    //Alphabet.txt는 abcdefg 가 들어있는 텍스트 파일이다.
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\Alphabet.txt","r");
    fgetc(fp);      //a 입력
    fgetc(fp);      //b 입력
    fgetc(fp);      //c 입력
    fgetc(fp);      //d 입력
    //d 까지 입력을 받았으니 파일 위치 지정자는 이제 e를 가리키고 있다.
    fseek(fp, 0, SEEK_SET);
    //fseek() 함수는 첫번째 인자인 fp를 
    //세번째 인자인 'SEEK_SET'으로부터 
    //두번째 인자인 '0'만큼 떨어진 곳으로 파일 위치 지정자를 재설정한다.
    //'SEEK_SET' 은 파일의 맨 처음을 일컫는 매크로 상수이다.
    //'SEEK_SET' 말고도 현재의 위치를 표시하는 'SEEK_CUR', 파일의 맨 마지막을 표시하는 'SEEK_END' 가 있다.
    printf("Back to first position of file: %c\n",fgetc(fp));
    fclose(fp);
    return 0;
}*/
/*출력 스트림도 마찬가지*/
#include <stdio.h>
int main(){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\a.txt","w");
    fputs("Won Ho is an excellent C programmer",fp);
    fseek(fp, 0, SEEK_SET);     //파일 위치 지정자를 파일의 맨 처음으로 재설정
    fputs("is Won Ho",fp);      //"Won Ho is"를 "is Won Ho"로 덮어씌움.
    fclose(fp);
    return 0;
}