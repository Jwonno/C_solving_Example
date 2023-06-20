//동적으로 할당된 배열의 크기를 다시 바꾸는 프로그램을 만들어보세요.
//즉 p 가 이미 원소가 10 인 동적으로 할당된 배열을 가리키고 있었는데 예상치 못하게 원소 5 개를 더 추가하려면 어떻게 해야 할까요.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 10;
    int *p = (int*)malloc(size*sizeof(int));
    printf("배열 p의 크기는 10 입니다.\n");
    printf("변경하실 배열의 크기를 입력하세요: ");
    scanf("%d",&size);
    p = (int*)malloc(size*sizeof(int));

    for(int i=0;i<size;i++){
        p[i] = i+1;
        printf("%d ",p[i]);
    }
    printf("\n정상적으로 변경되었습니다.");

    free(p);
}