/* ���� ���� ���α׷� */
/* �������� ���α׷����� ����� ���� ����� �Է� �޾Ƽ� �迭�� ���� �ִ� �۾��� ��������. 
����� ���� ��� ��� ������ ������ �Ʒ��� ���ٰ� �սô�.
-------------------
��ü å�� ����
å �̸�
���� �̸�
���ǻ� �̸�
���� ����
å �̸�
���� �̸�
���ǻ� �̸�
���� ����
--------���� ���--------
2 2
C���
Psi Psi
itguru
offset
AAA
---------------------
�� ���� ���� ������. ���� ���Ͽ� ���� ����� ����ϴ� �۾��� �����ؾ� �մϴ�. */
#include <stdio.h>
#include <stdlib.h>

enum{N, Y};
typedef struct BOOK {
    char title[30];
    char auth[30];
    char publ[30];
    int borrowed;
} BOOK;

//�˻���� ���ϴ� ���
int compare(char *str, char *word);

//å�� ���� �߰��ϴ� ���
void add(int *num_total_book, BOOK *book);

//å�� �˻��ϴ� ���
void search(int num_total_book, BOOK *book);

//å�� ������ ���
void borrow(BOOK *book, int num_total_book);

//å�� �ݳ��ϴ� ���
void re_turn(BOOK *book, int num_total_book);

//å�� ������ ����ϴ� ��� 
void print_book(BOOK book);

//å ����� ���Ͽ� ����ϴ� ���
int print_book_list(BOOK *book, int num_total_book);

//���Ϸκ��� ��������� �ҷ����� ���
int load_book_list(BOOK *book, int *num_total_book);

//���ڿ��� ������ ��ȯ��Ű�� �Լ�
int get_int(char*num);

int main(){
    printf("This is library program.\n");
    int choice;
    int num_total_book = 0;

    printf("Please set the maximum number of books that can be stored: ");
    scanf("%d",&choice);

    BOOK *book = (BOOK*)malloc(sizeof(BOOK)*choice);

    while(1){
        printf("Choice[1]: Add new books\n");
        printf("Choice[2]: Search\n");
        printf("Choice[3]: Borrow books\n");
        printf("Choice[4]: Return books\n");
        printf("Choice[5]: Print to file book_list.txt\n");
        printf("Choice[6]: Road to file book_list.txt\n");
        printf("Choice[7]: End program\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Add new books\n");
            add(&num_total_book, book);
            break;
            
            case 2:
            printf("Search\n");
            search(num_total_book, book);
            break;
            
            case 3:
            printf("Borrow books\n");
            borrow(book, num_total_book);
            break;
            
            case 4:
            printf("Return books\n");
            re_turn(book, num_total_book);
            break;
            
            case 5:
            print_book_list(book, num_total_book);
            break;

            case 6:
            load_book_list(book, &num_total_book);
            break;

            case 7:
            printf("Thank you");
            break;

            default:
            printf("choose again\n");
        }
        if(choice==7) {break;}
    }
    free(book);
    return 0;
}

//å �߰� ���
void add(int *num_total_book, BOOK *book){
    if(*num_total_book==100) printf("Exceed capacity\n\n");
    else{
        printf("Enter the title: ");
        scanf("%s",book[*num_total_book].title);
        printf("Enter the name of author: ");
        scanf("%s",book[*num_total_book].auth);
        printf("Enter the publisher of the book: ");
        scanf("%s",book[*num_total_book].publ);
        book[*num_total_book].borrowed = N;
        (*num_total_book)++;
        printf("Success to add a new book\n\n");
    }
}

//�˻���� ��
int compare(char *str, char *word){
   int j=0;
   for(int i=0;str[i];i++){
    for(;word[j];j++){
        if(str[i+j]!=word[j]){
            j=0;
            break;
        }
    }
    if(j!=0) return 1;
   }
   return 0;
}

//å �˻� ���
void search(int num_total_book, BOOK *book){
    char word[30];
    int user_choice;
    printf("1. Search title \n");
    printf("2. Search author \n");
    printf("3. Search publisher \n");
    printf("others: back to menu\n");
    scanf("%d",&user_choice);
    //���� �˻�
    if(user_choice==1){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
            if(compare(book[i].title,word)==1){
                print_book(book[i]);
            }
        }
    }
    //�۰� �˻�
    else if(user_choice==2){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
           if(compare(book[i].auth,word)==1){
                print_book(book[i]);
            }
        }
    }
    //���ǻ� �˻�
    else if(user_choice==3){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
           if(compare(book[i].publ,word)==1){
                print_book(book[i]);
            }
        }
    }
}

//å�� ������ ����ϴ� ���
void print_book(BOOK book){
    printf("Title: \"%s\"\n",book.title);
    printf("Author: \"%s\"\n",book.auth);
    printf("Publisher: \"%s\"\n",book.publ);
    if(book.borrowed==Y) printf("Borrowed\n\n");
    else if(book.borrowed==N) printf("Can borrow\n\n");
}

//å ���� ���
void borrow(BOOK *book, int num_total_book){
    int num;
    printf("Enter the book number: ");
    scanf("%d",&num);
    if(0<num<=num_total_book) {
        if(book[num-1].borrowed==Y) printf("Already borrowed\n\n");
        else if(book[num-1].borrowed==N){
            book[num-1].borrowed=Y;
            printf("Success to borrow\n\n");
        }
    }
    else printf("Not Exists\n\n");
}
//å �ݳ� ���
void re_turn(BOOK *book, int num_total_book){
    int num;
    printf("Enter the book number: ");
    scanf("%d",&num);
    if(0<num<=num_total_book) {
        if(book[num-1].borrowed==N) printf("not borrowed\n\n");
        else if(book[num-1].borrowed==Y) {
            book[num-1].borrowed=N;
            printf("Success to return\n\n");
        }
    }
    else printf("Not Exists\n\n");
}

//���Ͽ� ��������� ����ϴ� ���
int print_book_list(BOOK *book, int num_total_book){
    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\book_list.txt","w");       
    if(fp==NULL){
        printf("WRITE ERROR!!!\n");
        return 0;
    }

    fprintf(fp, "%d\n",num_total_book);
    
    printf("Title\nAuthor\nPublisher\n");

    for(int i=0;i<num_total_book;i++){
        fprintf(fp, "%s\n",book[i].title);
        fprintf(fp, "%s\n",book[i].auth);
        fprintf(fp, "%s\n",book[i].publ);
        if(book[i].borrowed==Y) fprintf(fp, "Y\n");
        else fprintf(fp, "N\n");
    }
    fclose(fp);
    printf("Success to print book list to book_list.txt\n");
    return 0;
}

//���Ϸκ��� ��������� �ҷ����� ���
int load_book_list(BOOK *book, int *num_total_book){
    
    char num[10];
    char buf[2];

    FILE*fp = fopen("C:\\Users\\dnjsg\\source\\C_language_training\\file_2\\book_list.txt","r");
    if(fp==NULL){
        printf("READ ERROR!!!\n");
        return 0;
    }

    fgets(num,9,fp);
    *num_total_book = get_int(num);

    for(int i=0;i<(*num_total_book);i++){
        int condition = 0;
        fgets(book[i].title,29,fp);
        fgets(book[i].auth,29,fp);
        fgets(book[i].publ,29,fp);
        //���ڿ��� �� ������ NULL ���� ������ ���๮�� '\n' �� NULL ���ڷ� �ٲٱ�
        for(int j=0;j<30&&condition!=3;j++){
            if(book[i].title[j]=='\n'){book[i].title[j]=NULL; condition++;}
            if(book[i].auth[j]=='\n'){book[i].auth[j]=NULL;condition++;}
            if(book[i].publ[j]=='\n'){book[i].publ[j]=NULL;condition++;}
        }
        if(fgetc(fp)=='Y') book[i].borrowed = Y;
        else book[i].borrowed = N;
        fseek(fp,-1,SEEK_CUR);

        //���� ��ġ �����ڸ� �����ٷ� �̵���Ű������ ����� �ڵ�
        fgets(buf,29,fp);
    }
    printf("Successfully loaded the file.\n\n");
    fclose(fp);
    return 0;
}

//���ڿ��� ������ ��ȯ��Ű�� �Լ�
int get_int(char *num){
     int digit=1, integer=0;

    for(int i=1;num[i]&&num[i]!='\n';i++){
        digit*=10;
    }
    for(int index=0;num[index]&&num[index]!='\n';index++){
        integer+=digit*(num[index]-48);
        digit/=10;
    }
    return integer;
}