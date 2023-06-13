#include <stdio.h>
//1000000 이하의 피보나치 수열 ( N 번째 항이 N - 1 번째 항과 N - 2 번째 항으로 표현되는 수열, 시작은 1,1,2,3,5,8,...) 의 짝수 항들의 합을 구한다
int main(){
    int sum=0;
    int N_1=1,N_2=1;
    while(N_2<=1000000){
       N_1+=N_2;
       N_2+=N_1;
       sum+=N_1;
    }
    printf("sum is %d", sum);
    return 0;
}