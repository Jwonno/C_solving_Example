#include <stdio.h>
//두 개의 문자열을 비교하는 함수를 만들어서 같으면 1, 다르면 0 을 리턴하게 해보세요.
int comp(char *str_a, char *str_b){
    for(int i=0;i<3;i++){
        if(str_a[i]!=str_b[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str_a[4]="abc";
    char str_b[4]="abc";
    printf("%d",comp(str_a, str_b));
    return 0;
}