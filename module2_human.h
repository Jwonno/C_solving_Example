enum{MALE, FEMALE};

struct Human{
    char name[20];
    int age;
    int gender;
};

struct Human Create_Human(char*name, int age, int gender);
int Print_Human(struct Human *human);

/*��� ���Ͽ��� 
���� ����
����ü, ����ü, ������
�Լ��� ����
�Ϻ� Ư���� �Լ�(ex.�ζ��� �Լ� ���)
��ũ��
����� ��� �� �� �ִ�.*/