#include<stdio.h>
//N ���� �ﰢ���� ����Ѵ�. ��, ����ڷ� ���� ������ N �� �Է� �޴´�.
int main(){
    int N=0;
    printf("�ݺ��� Ƚ���� �������ּ���: ");
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        for(int k=0;k<2*N;k++){
            if(k<N+i&&k>N-i){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
} 