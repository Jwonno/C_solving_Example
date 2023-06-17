//구조체 안의 구조체
#include <stdio.h>
void copy_str(char *dest, const char *src);
struct employee {
    int age;
    int salary;
};

struct company {
    struct employee data;
    char name[10];
};

int main(){
    struct company Kim;

    Kim.data = {31, 300000};

    copy_str(Kim.name, "J.W. Kim");

    printf("Kim's age: %d\n", Kim.data.age);
    printf("Kim's salary: %d$/year\n",Kim.data.salary);
    printf("Kim's name: %s\n",Kim.name);
    return 0;
}

void copy_str(char *dest, const char *src){
    while(*src){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}