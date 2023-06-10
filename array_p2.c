#include <stdio.h>
//입력받는 학생들의 성적을 높은 순으로 정렬하여 막대그래프로 나타내보세요

int main(){
    int student[5]={0};
    int temp[5]={0};
    printf("학생들의 성적을 입력해주세요(10점 만점): ");
    for(int i=0;i<5;i++){
        scanf("%d",&student[i]);
    }
    printf("[성적 그래프]\n");
    for(int i=0;i<5;i++){
        printf("%d번째 학생: ",i+1);
        for(int k=0;k<student[i];k++){
            printf("*");
        }
        printf("\n");
    }
   
    return 0;
}