#include <stdio.h>
//���⸦ ��������. ����ڰ� 1 �� ������ +, 2 �� ������ - �� ���� ������� �ؼ� ����� �˴ϴ�. 
// ���� ������ ��� ����� ��� �����Ǿ�� �ϰ�, ����� ��ɵ� �־�� �մϴ�.

void adder(double *v){
    double v2;
    printf("%.2lf+",*v);
    scanf("%lf",&v2);
    *v+=v2;
    printf("=%.2lf\n",*v);
}
void subtractor(double *v){
    double v2;
    printf("%.2lf-",*v);
    scanf("%lf",&v2);
    *v-=v2;
    printf("=%.2lf\n",*v);
}


int main(){
    int set = 1;
    double value =0.0;
    printf("Set initial value\n");
    scanf("%lf", &value);
    while(set){
        printf("+(1), -(2), clear(3), enter(the others): ");
        scanf("%d",&set);
        switch(set){
            case 1:
            adder(&value);
            break;
            case 2:
            subtractor(&value);
            break;
            case 3:
            printf("Set initial value\n");
            scanf("%lf",&value);
            break;
            default:
            printf("Result = %.2lf",value);
            set = 0;
        } 
    }
    return 0;
}