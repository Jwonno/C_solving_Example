//typedef
/*//����ü���� ����� ������ ���� �Ǻ��ڵ�
#include <stdio.h.>
enum{MALE, FEMALE};
struct HUMAN{       
    int age;                      
    int height;                  
    int weight;
    int gender;
};
typedef struct HUMAN Human;        
//typedef (�̸��� ���� �ο��ϰ��� �ϴ� Ÿ��) (���� �� Ÿ���� �̸�)
//�� �̸��� ���� �ο��ϰ��� �ϴ� Ÿ���� 'struct Human' �̰�, ���� �� Ÿ���� �̸��� 'human' �̴�.
//���� struct Human ��ſ� Human�� �� �� �ִ�. ���� ������ struct Human �� ����ϴ� �͵� �����ϴ�.

int Print_Status(Human human);

int main(){
    Human Adam = {31, 152, 75, MALE};
    Human Eve = {27, 166, 48, FEMALE};

    Print_Status(Adam);
    Print_Status(Eve);

    return 0;
}

int Print_Status(Human human){
    if(human.gender == MALE) printf("Male \n");
    else printf("Female \n");

    printf("AGE: %d, Height: %d, Weight: %d \n", human.age, human.height, human.weight);

    if(human.gender == MALE){
        if(human.height>=180) printf("He is a Winner!!!\n");
        else printf("He is a Loser!!!\n");
    }
    printf("-----------------------------\n"); 

    return 0;
}*/

/*//���� ���α׷�
#include <stdio.h>
int main(){
    int input;
    int a, b;

    while(1){
        printf("-----Calculator-----\n");
        printf("1. Summation\n");
        printf("2. subtraction\n");
        printf("3. End Program\n");

        scanf("%d",&input);

        if(input == 1){
            printf("You choose 1.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a+b);
        }
        else if(input == 2){
            printf("You choose 2.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a-b);
        }
        else if(input == 3){
            printf("Thank you, bye");
            break;
        }
        else {
            printf("Wrong number.\n");
            printf("enter the number again.\n\n");
        }
    }
}*/
// ���� ��ǻ���� cpu�� 32��Ʈ ������ �������� �ʰ� ���� 16��Ʈ ������ ��Ʈ���길 �����ϴٰ� �ϸ� int ���� ��� �������� �������� char�̳� short�� �ٲ��־���Ѵ�.
// �׷��� �ٸ� ������ ��ǻ�ʹ� int �� ����� �����ϴٰ� ����
// �׷��ٸ� �������� �������� �ϳ��ϳ� �ٲ��ִ� ���� ����� ��ȿ�����̹Ƿ� ������ ���� typedef�� �̿��ϸ� ȿ�������� �ٲ� �� �ִ�.
/*//���� ���� ���α׷�
#include <stdio.h>
typedef int CAL_type;   //�� ������ int�� char�̳� short���� �ٲٸ� CAL_type ���� ��� �������� int���� char�̳� short���� �ٲ��� �� �ִ�. 
int main(){
    CAL_type input;
    CAL_type a, b;

    while(1){
        printf("-----Calculator-----\n");
        printf("1. Summation\n");
        printf("2. subtraction\n");
        printf("3. End Program\n");

        scanf("%d",&input);

        if(input == 1){
            printf("You choose 1.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a+b);
        }
        else if(input == 2){
            printf("You choose 2.\n");
            printf("Enter the two numbers: ");
            scanf("%d%d",&a, &b);
            printf("The result is %d\n\n",a-b);
        }
        else if(input == 3){
            printf("Thank you, bye");
            break;
        }
        else {
            printf("Wrong number.\n");
            printf("enter the number again.\n\n");
        }
    }
}*/

/*//�������� typedef ������
#include <stdio.h>
int add(int a, int b){ return a+b; }
typedef int CAL_TYPE;
typedef int (*Padd)(int, int);
typedef int Arrays[10];
int main(){
    CAL_TYPE a =10;
    Arrays arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};        // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; (equivalent expression)
    Padd ptr = add;                                     //int (*ptr)(int, int) = add; (equivalent expression)
    printf("a: %d\n",a);
    printf("arr[3]: %d\n",arr[3]);
    printf("add(3, 5): %d",ptr(3,5));

    return 0;
}*/


//volatile (�ܺ� �ϵ����� ����� �� ���)
/*#include <stdio.h>
typedef struct SENSOR{
    //���� �Ǹ� 1, ���� �ȵǸ� 0 �̴�.
    int sensor_flag;
    int data;
}SENSOR;            //typedef struct SENSOR SENSOR; (equivalent expression)

int main(){
    SENSOR *sensor;
    //���� �������� �ʴ� ���� ���� while loop
    while(!(sensor->sensor_flag)){
        printf("Data: %d\n",sensor->data);
    }
}
//���� ���� ������ �ڵ带 ¥��, ������ ��Ȳ������ sensor_flag�� ���� ������ �����Ƿ� 
//�����Ϸ��� ���� �� �� ���� �а� 0 �� �ƴ϶�� �׳� ����, 0 �̶�� while ���� ������ ������ ������ �����ع�����.
//�ᱹ, �����Ϸ��� �ڵ����� ����ȭ�Ͽ� ������ ���� �ڵ�� ����������.
#include <stdio.h>
typedef struct SENSOR{
    
    int sensor_flag;
    int data;
}SENSOR;            

int main(){
    SENSOR *sensor;
    if(!(sensor->sensor_flag)){
        while(1){}
    }
    printf("Data: %d\n",sensor->data);
}
//���� �̸� �����ϱ����� ������� ���Դµ�
//ù��°�� ����ȭ �ɼ��� ���� ���ε�, �̴� �ٸ� �ڵ���� ����ȭ�� �����ϰڴٴ� ������ �ս��� ũ��. 
//�׷��� ���ܳ� ����� volatile Ű���带 ����ϴ� ���̴�.
#include <stdio.h>
typedef struct SENSOR{
    
    int sensor_flag;
    int data;
}SENSOR;            

int main(){
    volatile SENSOR *sensor;            //sensor�� ���ؼ��� ����ȭ �۾��� �������� �ʴ´�.
    
    while(!(sensor->sensor_flag)){
        printf("Data: %d\n",sensor->data);
    }
}
//volatile �� '����������' �̶�� ������ sensor->sensor_flag �� ���� '����������' ���� �� ������ ����ȭ �۾��� �������� ����� �ǹ��̴�.*/


//#pragma (�����Ϸ����� ���ϴ� ��ó���� ��ɾ�)
/*//#pragma pack
#include <stdio.h>
struct Weird {
    char arr[2];
    int i;
};

int main(){
    struct Weird a;
    printf("size of a: %d\n",sizeof(a));
    return 0;
}
//char �� ������ arr[0], arr[1]�� 2��, int �� ������ 1���̹Ƿ� 1+1+4�� ������ ��°���� 6������, ������ ��µ� ����� 8�̴�.
//�ֳ��ϸ� ������ �޸� �󿡼� �� ����ü�� ũ�⸦ 8 ����Ʈ�� �����Ϸ��� �����Ͽ��� �����̴�,
//���� �츮�� ����ϴ� ��ǻ�Ϳ����� ������ 4 ����Ʈ ������ ��� ���� ó���ϴ� ���� �����⿡
//������ ��ǻ�Ϳ��� �����͸� ������ �� ���� 4�� ����� �����͸� �����ϴ� ���� ó���� �����ϴ�.
//�̷��� �����Ͱ� 4 �� ��� ��迡 ���� ���� "���� ���� ��迡 ���� �ִ�." ��� �Ѵ�.
//�����Ϸ��� �Ͽ��� ����ü�� ���� ���� ��迡 ���� ����� �ϰ� ���� �� �ٷ� pragma Ű���带 �̿��Ѵ�.
#include <stdio.h>
#pragma pack(1)     //����ü�� 1 ����Ʈ ������ �����϶�� ����̴�. ��, ����ü�� ũ�Ⱑ 1 �� ����� �ǰ� �϶�� �� (����ũ�μ���Ʈ �迭�� �����Ϸ����Ը� ��ȿ�� ���)
struct Weird {
    char arr[2];
    int i;
};

int main(){
    struct Weird a;
    printf("size of a: %d",sizeof(a));
    return 0;
}*/
/*//#pragma once 
//���� Weird����ü ������ ��� Weird.h ��������� ��������
#include <stdio.h>
#include "weird.h"
#include "weird.h" //�̷��� ��������� �� �� �����ϸ� �����Ͽ����� �߻��Ѵ�.
int main(){
    struct weird a;
    a.i = 3;
    printf("a.i of weird struct:  %d\n",a.i);
    return 0;
}
//�̸� �����ϱ����� ������� ���� C�� �⺻ ��ó���� ��ɾ� #ifndef �� #define �� �̿��ϴ� ����� �ִ�.
//modified 'weird.h'
#ifndef WEIRD_H      //ó�� "weird.h" �� �����ϸ� #ifndef WEIRD_H �� ���� �Ǿ� �Ʒ� �ڵ带 ��� C �ҽ����Ͽ� �����ϴµ�,
#define WEIRD_H      //WEIRD_H�� �����ϸ鼭 ���߿� �ٽ� "weird.h" �� �����ϸ� #ifndef WEIRD_H �� ������ �Ǿ� �Ʒ� �ڵ� ������ �ǳʶٰ� #endif�� �Ѿ��.
struct weird{
    int arr[2];
    int i;
};
#endif 

//�������δ� #pragma once�� �̿��ϴ� ����̴�.
//modified 'weird.h'
#pragma once
struct weird{
    char arr[2];
    int i;
}; 
//�� ����� �����Ϸ��� �Ͽ��� �� ������ ���� �� �� ���� include �� �� �ְ� �����.*/