//p3_i.txt �� ���ڿ��� �Է� �޾Ƽ� p3_o.txt �� �� ���ڿ��� ������ ����ϴ� ���α׷��� ��������
#include <stdio.h>
void reverse_str(char str[], char r_str[]);
int main(){
    char buf[30];
    char r_buf[30];
    FILE*fp_i = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\p3_i.txt","r");
    FILE*fp_o = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_1\\p3_o.txt","w");
    if(fp_i==NULL||fp_o==NULL){
        printf("WRITE OR READ ERROR!!!\n");
        return 0;
    }
    fgets(buf, 30, fp_i);
    reverse_str(buf, r_buf);
    fputs(r_buf,fp_o);
    
    fclose(fp_i);
    fclose(fp_o);
    return 0;
}

void reverse_str(char str[], char r_str[]){
    int length=0;
    while(str[length]){
        length++;
    }
   for(int i=1;i<=length;i++){
    r_str[i-1]=str[length-i];
   }
   r_str[length] = '\0';
}