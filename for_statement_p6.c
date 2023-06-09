#include <stdio.h>
/*다음 식을 만족하는 자연수 a,b,c 의 개수를 구하여라

  i) a + b + c = 2000
  ii) a ＞ b > c, a,b,c 는 모두 자연수
*/
int main(){
    int N=0,c=0;
    for(int a=1;a<1999;a++){
        for(int b=1;b<2000-a;b++){
            c=2000-a-b;
            if(a>b&&b>c){
                N++;
            }
        }
    }
    printf("자연수 a,b,c의 순서쌍의 개수는 %d 이다.\n",N);
    return 0;
}