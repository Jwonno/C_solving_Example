#include <stdio.h>
//입력받는 학생들의 성적을 높은 순으로 정렬하여 막대그래프로 나타내보세요

int main(){
    int student[5]={0};
    int temp[5]={0};
    printf("학생들의 성적을 입력해주세요: ");
    for(int i=0;i<5;i++){
        scanf("%d",&student[i]);
        printf("%d번째 학생의 성적은 %d 입니다.",i,student[i]);
        temp[i]=student[i];
        for(int k=0;k<i;k++){
            if(student[k]>student[i]){
                int temp;
                temp = student[i];
                student[i] = student[k];
                student[k] = temp;
            }
        }
    }
   
    return 0;
}