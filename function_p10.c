#include <stdio.h>
//계산기를 만들어보세요. 사용자가 1 을 누르면 +, 2 를 누르면 - 와 같은 방식으로 해서 만들면 됩니다. 
// 물론 이전의 계산 결과는 계속 누적되어야 하고, 지우기 기능도 있어야 합니다.

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