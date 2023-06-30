// 파일에서 특정한 단어를 검색하여 몇 번째 줄에 나오는지 모두 출력하는 프로그램을 만드세요.
#include <stdio.h>

int print_line_number(char word[]);

int main(){
    char word[30];
    printf("Search: ");

    scanf("%s",word);

    print_line_number(word);

    return 0;
}

int print_line_number(char word[]){
    int check=0;
    char c;
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\p2.txt","r");
    if(fp==NULL){
        printf("READ ERROR!!!\n");
        return 0;
    }

    int line_num=1;
    while((c=fgetc(fp))!=EOF){
        int i=0;
        if(word[i]==c){
            fseek(fp, -1, SEEK_CUR);
            while(word[i]==(c=fgetc(fp))){
                if(word[i+1]==NULL) {
                    printf("The line number: %d\n",line_num); 
                    check=1; 
                }
                i++;
            }
            if(c!=EOF) fseek(fp,-i,SEEK_CUR);
            //파일 끝부분에 검색어가 존재할 경우 파일의 맨 마지막 부분에서 파일 위치 지정자가 더 가지 못하고 막혀서 덜 가게 되고 fseek() 함수에 의해 다시 제자리로 오게된다.
            //따라서 파일 맨 마지막 부분에 존재하는 검색어가 아닐 경우에만 fseek() 함수를 호출해야한다. 
        }
        if(c=='\n') line_num++;
    }
    if(check==0)    printf("Not exist\n");
    fclose(fp);
    return 0;
}