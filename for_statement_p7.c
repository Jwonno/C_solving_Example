#include <stdio.h>
//������ �ڿ��� N �� �Է� �޾� N �� ���μ� ���� �� ����� ����Ͽ���.
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