// 파일에서 특정한 문자를 검색하여 몇 개나 나오는지 출력하는 프로그램을 만드세요.
#include <stdio.h>
int explore_character(char word[]);

int main(){
    
    char word[30];
    printf("Search: ");
    scanf("%s",word);

    printf("The number of asked word: %d\n",explore_character(word));

    return 0;
}

int explore_character(char word[]){
    int num=0;
    char c;
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\p3.txt","r");
    if(fp==NULL){
        printf("READ ERROR!!!\n");
        return -1;
    }

    while((c=fgetc(fp))!=EOF){
        int i=0;
        if(word[i]==c){
            fseek(fp, -1, SEEK_CUR);
            while(word[i]==(c=fgetc(fp))&&word[i]!=NULL){
                if(word[i+1]==NULL) {
                    num++;
                }
                i++;
            }
            if(c!=EOF) fseek(fp,-i,SEEK_CUR);
        }
    }

    fclose(fp);
    return num;
}