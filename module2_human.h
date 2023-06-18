enum{MALE, FEMALE};

struct Human{
    char name[20];
    int age;
    int gender;
};

struct Human Create_Human(char*name, int age, int gender);
int Print_Human(struct Human *human);

/*헤더 파일에는 
전역 변수
구조체, 공용체, 열거형
함수의 원형
일부 특정한 함수(ex.인라인 함수 등등)
매크로
등등이 들어 갈 수 있다.*/