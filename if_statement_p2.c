#include<stdio.h>

int main(){
    int N=0;
    printf("�ݺ��� Ƚ���� �����Ͻÿ�. ");
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