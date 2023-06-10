#include <stdio.h>
//사용자로 부터 5 명의 학생의 수학, 국어, 영어 점수를 입력 받아서 평균이 가장 높은 사람 부터 평균이 가장 낮은 사람까지 정렬되어 출력하도록 하세요. 
//특히, 평균을 기준으로 평균 이상인 사람 옆에는 '합격', 아닌 사람은 '불합격' 을 출력하게 해보세요.
int main(){
    int arr[5][3];
    double avg[5];
    double student[5];
    for(int i=0;i<5;i++){
        printf("student%d의 수학, 국어, 영어 점수\n",i+1);
        for(int k=0;k<3;k++){
            scanf("%d",&arr[i][k]);
        } 
        printf("\n");
    }
    double sum=0;
   for(int i=0;i<5;i++){
    avg[i]=(arr[i][0]+arr[i][1]+arr[i][2])/3.0;
    student[i]=avg[i];
    sum+=avg[i];
   }
   //sort
   for(int i=0;i<5;i++){
    for(int k=0;k<i;k++){
        if(avg[k]<avg[i]){
            double temp;
            temp=avg[i];
            avg[i]=avg[k];
            avg[k]=temp;
        }
    }
   }
   //print
   for(int i=0;i<5;i++){
    for(int k=0;k<5;k++){
        if(avg[i]==student[k]){
            if(avg[i]>=sum/5) printf("student%d (합격)",k+1);
            else printf("student%d (불합격)",k+1);
        }
    }
    printf("\n");
   }
    return 0;
}