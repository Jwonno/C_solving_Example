/* 도서 관리 프로그램 */
/* 도서관리 프로그램에서 출력한 도서 목록을 입력 받아서 배열에 집어 넣는 작업을 만들어보세요. 
참고로 도서 목록 출력 파일의 형식은 아래와 같다고 합시다.
-------------------
전체 책의 개수
책 이름
저자 이름
출판사 이름
대출 유무
책 이름
저자 이름
출판사 이름
대출 유무
--------예를 들면--------
2 2
C언어
Psi Psi
itguru
offset
AAA
---------------------
와 같은 형식 이지요. 물론 파일에 도서 목록을 출력하는 작업도 수정해야 합니다. */
#include <stdio.h>
#include <stdlib.h>

typedef struct BOOK {
    char title[30];
    char auth[30];
    char publ[30];
    int borrowed;
} BOOK;

//검색어와 비교하는 기능
int compare(char *str, char *word);

//책을 새로 추가하는 기능
void add(int *num_total_book, BOOK *book);

//책을 검색하는 기능
void search(int num_total_book, BOOK *book);

//책을 빌리는 기능
void borrow(BOOK *book);

//책을 반납하는 기능
void re_turn(BOOK *book);

//책 목록을 파일에 출력하는 기능
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

//책 추가 기능
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

//검색어와 비교
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

//책 검색 기능
void add(int num_total_book, BOOK *book){
    char word[30];
    int user_choice;
    printf("1. Search title \n");
    printf("2. Search author \n");
    printf("3. Search publisher \n");
    printf("others: back to menu\n");
    scanf("%d",&user_choice);
    //제목 검색
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
    //작가 검색
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
    //출판사 검색
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

//책 대출 기능
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
//책 반납 기능
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