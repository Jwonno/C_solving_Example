#include <stdio.h>
//특정한 수 N 을 입력받아서 N 을 소인수분해한 결과가 출력되게 해보세요

void factorize(int N){
    printf("N = %d, %d = 1",N,N);
    for(int i=2;i<=N;i++){
        if(N%i==0){
            printf("*%d",i);
            N=N/i;
            i=2;
        }
        
    }
}

int main(){
    int N;
    printf("Enter the number: ");
    scanf("%d",&N);
    factorize(N);
}