//�������� �Ҵ�� �迭�� ũ�⸦ �ٽ� �ٲٴ� ���α׷��� ��������.
//�� p �� �̹� ���Ұ� 10 �� �������� �Ҵ�� �迭�� ����Ű�� �־��µ� ����ġ ���ϰ� ���� 5 ���� �� �߰��Ϸ��� ��� �ؾ� �ұ��.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 10;
    int *p = (int*)malloc(size*sizeof(int));
    printf("�迭 p�� ũ��� 10 �Դϴ�.\n");
    printf("�����Ͻ� �迭�� ũ�⸦ �Է��ϼ���: ");
    scanf("%d",&size);
    p = (int*)malloc(size*sizeof(int));

    for(int i=0;i<size;i++){
        p[i] = i+1;
        printf("%d ",p[i]);
    }
    printf("\n���������� ����Ǿ����ϴ�.");

    free(p);
}