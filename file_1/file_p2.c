//p2.txt �� ��� �� ���� ��� �ִµ�, �� ���� �Է� �޾Ƽ� Ư���� ���ڿ��� �˻��ϴ� ���α׷��� ��������
#include <stdio.h>
int compare(FILE*fp, char word[]);
int main(){
    char word[100];
    printf("Enter the search word: ");
    scanf("%s",word);
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\p2.txt","r");
    if(fp == NULL){
        printf("READ ERROR!!\n");
        return 0;
    }
    if(compare(fp,word)==1) {printf("Exist\n");}
    else {printf("Do not exist\n");}
    fclose(fp);
    return 0;
}
int compare(FILE*fp, char word[]){
    int position=0;
 while(fgetc(fp)!=EOF){
        fseek(fp, position, SEEK_SET);
        for(int i=0;fgetc(fp)==word[i]||word[i]=='\0';i++){
            if(word[i]=='\0'){
                return 1;
            }
        }
        position++;
    }
    return 0;
}
   
    