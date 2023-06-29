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
void borrow(BOOK *book);

//å�� �ݳ��ϴ� ���
void re_turn(BOOK *book);

//å ����� ���Ͽ� ����ϴ� ���
int print_book_list(BOOK *book, int num_total_bok);

int main(){

    printf("This is library program.\n");
    int choice=1;
    int num_total_book = 0;

    BOOK book[100];

    printf("Please set the maximum number of books that can be stored: ");
    scanf("%d",&choice);

    BOOK *book = (BOOK*)malloc(sizeof(BOOK)*choice);

    while(1){
        printf("Choice[1]: Add new books\n");
        printf("Choice[2]: Search\n");
        printf("Choice[3]: Borrow books\n");
        printf("Choice[4]: Return books\n");
        printf("Choice[5]: End program\n");
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
            borrow(book);
            break;
            
            case 4:
            printf("Return books\n");
            re_turn(book);
            break;
            
            case 5:
            printf("Thank you");
            choice = 0;
            break;

            default:
            printf("choose again\n");
        }
        if(choice==5) break;
    }
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
        book[*num_total_book].borrowed = 0;
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
void add(int num_total_book, BOOK *book){
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
                printf("Number: \"%d\"\n",i+1);
                printf("Title: \"%s\"\n",book[i].title);
                printf("Author: \"%s\"\n",book[i].auth);
                printf("Publisher: \"%s\"\n",book[i].publ);
               if(book[i].borrowed==1) printf("Borrowed\n\n");
                else printf("Can borrow\n\n");
            }
        }
    }
    //�۰� �˻�
    else if(user_choice==2){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
           if(compare(book[i].auth,word)==1){
                printf("Number: \"%d\"\n",i+1);
                printf("Title: \"%s\"\n",book[i].title);
                printf("Author: \"%s\"\n",book[i].auth);
                printf("Publisher: \"%s\"\n",book[i].publ);
               if(book[i].borrowed==1) printf("Borrowed\n\n");
                else printf("Can borrow\n\n");
            }
        }
    }
    //���ǻ� �˻�
    else if(user_choice==3){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
           if(compare(book[i].publ,word)==1){
                printf("Number: \"%d\"\n",i+1);
                printf("Title: \"%s\"\n",book[i].title);
                printf("Author: \"%s\"\n",book[i].auth);
                printf("Publisher: \"%s\"\n",book[i].publ);
               if(book[i].borrowed==1) printf("Borrowed\n\n");
                else printf("Can borrow\n\n");
            }
        }
    }
}

//å ���� ���
void borrow(BOOK *book){
    int num;
    printf("Enter the book number: ");
    scanf("%d",&num);
    if(book[num-1].borrowed==1) printf("Already borrowed\n");
    else {
        book[num-1].borrowed=1;
        printf("Success to borrow\n\n");
    }
}
//å �ݳ� ���
void re_turn(BOOK *book){
    int num;
    printf("Enter the book number: ");
    scanf("%d",&num);
    if(book[num-1].borrowed==0) printf("not borrowed\n");
    else {
        book[num-1].borrowed=0;
        printf("Success to return\n\n");
    }
}