// ���Ͽ��� Ư���� ���ڸ� �˻��Ͽ� �� ���� �������� ����ϴ� ���α׷��� ���弼��.
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
            //���� ���κп� �˻�� ������ ��� ������ �� ������ �κп��� ���� ��ġ �����ڰ� �� ���� ���ϰ� ������ �� ���� �ǰ� fseek() �Լ��� ���� �ٽ� ���ڸ��� ���Եȴ�.
            //���� ���� �� ������ �κп� �����ϴ� �˻�� �ƴ� ��쿡�� fseek() �Լ��� ȣ���ؾ��Ѵ�. 
        }
    }

    fclose(fp);
    return num;
}