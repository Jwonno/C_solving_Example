#include <stdio.h>
/*���� ���� �����ϴ� �ڿ��� a,b,c �� ������ ���Ͽ���

  i) a + b + c = 2000
  ii) a �� b > c, a,b,c �� ��� �ڿ���
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
    printf("�ڿ��� a,b,c�� �������� ������ %d �̴�.\n",N);
    return 0;
}