//���ڿ��� �� �� �Է� �޾Ƽ� ���� �Է¹��� ���ڿ����� ���߿� �Է¹��� ���ڿ��� ��ġ�� �˻��ϴ� �Լ��� ��������. 
//���� ���ٸ� -1 �� �����ϰ� �ִٸ� �� ��ġ�� �����մϴ�.
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