#include <stdio.h>
//임의의 자연수 N 을 입력 받아 N 을 소인수 분해 한 결과를 출력하여라.
int main(){
    int N;
    printf("insert integer: ");
    scanf("%d",&N);
    printf("N=%d",N);
    printf(", %d = 1",N);
    for(int i=2;i<=N;i++){
        if(N%i==0){
            printf("*%d",i);
            N=N/i;
            i=1;
        }
    }
    return 0;
}