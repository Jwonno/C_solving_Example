#include <stdio.h>
int line_num(FILE*fp, char word[]);
int compare(char c, char word);
int main(){
    char word[30];
    int result;
    FILE*fp=fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\p2.txt","r");
    if(fp==NULL){
        printf("READ ERROR!!!\n");
        return 0;
    }
    printf("Search: ");
    scanf("%s",word);
    if((result=line_num(fp,word))!=0) printf("The line number: %d\n",result);
    else printf("Not exist\n");
    fclose(fp);
    return 0;
}

int line_num(FILE*fp, char word[]){
    int line_num=0;
    char c;
    while((c=fgetc(fp))!=EOF){
        for(int i=0;compare(c,word[i]);i++){
            if(word[i+1]==NULL) return line_num;
        }
        if(fgetc(fp)=='\n'){
            line_num++;
        }
    }
    return 0;
}

int compare(char c, char word){
   if(c==word)  return 1;
   else return 0;
}