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
            while(word[i]==fgetc(fp)){
                if(word[i+1]==NULL) {
                    printf("The line number: %d\n",line_num); 
                    check=1; 
                }
                i++;
            }
            fseek(fp,-i,SEEK_CUR);
        }
        if(c=='\n') line_num++;
    }
    if(check==0)    printf("Not exist\n");
    fclose(fp);
    return 0;
}