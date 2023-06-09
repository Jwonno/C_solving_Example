#include <stdio.h>
//입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램을 만들어 보세요.

int main(){
    int student[5]={0};
    printf("학생들의 성적을 입력해주세요: ");
    for(int i=0;i<5;i++){
        scanf("%d",&student[i]);
        for(int k=0;k<i;k++){
            if(student[k]>student[i]){
                int temp;
                temp = student[i];
                student[i] = student[k];
                student[k] = temp;
            }
        }
    }
    printf("\n[성적순서]\n\n");
    for(int i=0;i<5;i++){
        printf("%d\n",student[i]);
    }

    return 0;
}