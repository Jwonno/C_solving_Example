#include<stdio.h>
//문제1과 동일한 형태를 취하되, 역 삼각형을 출력한다. 
int main(){
    int N=0;
    printf("반복할 횟수를 지정하시오. ");
    scanf("%d",&N);
    for(int i=N;i>=0;i--){
        for(int k=0;k<2*N;k++){
            if(k>N-i&&k<N+i){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}