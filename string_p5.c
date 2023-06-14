//문자열을 두 개 입력 받아서 먼저 입력받은 문자열에서 나중에 입력받은 문자열의 위치를 검색하는 함수를 만들어보세요. 
//만일 없다면 -1 을 리턴하고 있다면 그 위치를 리턴합니다.
#include <stdio.h>

int search_location(char *str, char *word);

int main(){
    char str[100];
    char word[100];
    printf("Enter the sentence: ");
    scanf("%s",str);
    
    printf("Enter the word: ");
    scanf("%s",word);

    if(search_location(str, word)==-1) printf("Not exist.");
    else printf("location of the word is %d ", search_location(str, word));

    return 0;
}

int search_location(char *str, char *word){
   int j=0;
   for(int i=0;str[i];i++){
    for(;word[j];j++){
        if(str[i+j]!=word[j]){
            j=0;
            break;
        }
    }
    if(j!=0) return i+1;
   }
   return -1;
}