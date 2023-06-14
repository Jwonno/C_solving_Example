/*도서 관리 프로그램을 만들어봅시다. 프로그램에는 다음과 같은 기능들이 구현되어 있어야 합니다.
- 책을 새로 추가하는 기능 (책의 총 개수는 100 권이라 하자. 이 때, 각 책의 정보는 제목, 저자의 이름, 출판사이고 각각 30자 이하이다.)
- 책의 제목을 검색하면 그 책의 정보가 나와야 한다.
- 위와 마찬가지로 저자, 출판사 검색 기능이 있어야 한다.
- 책을 빌리는 기능.
- 책을 반납하는 기능*/
#include <stdio.h>

//책을 새로 추가하는 기능
void add(int *borrowed, int *num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]);

//책을 검색하는 기능
void search(int *borrowed, int num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]);

//책을 빌리는 기능
void borrow();

//책을 반납하는 기능
void re_turn();

int main(){
    printf("This is library program.\n");
    int choice = 1;
    int num_total_book = 0;

    char book_title[100][30], book_auth[100][30], book_publ[100][30];
    int borrowed[100];

    while(choice){
        printf("Choice[1]: Add new books\n");
        printf("Choice[2]: Search\n");
        printf("Choice[3]: Borrow books\n");
        printf("Choice[4]: Return books\n");
        printf("Choice[5]: End program\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Add new books\n");
            add(borrowed, &num_total_book, book_title, book_auth, book_publ);
            break;
            
            case 2:
            printf("Search\n");
            //search();
            break;
            
            case 3:
            printf("Borrow books\n");
            //borrow();
            break;
            
            case 4:
            printf("Return books\n");
            //re_turn();
            break;
            
            case 5:
            printf("Thank you");
            choice = 0;
            break;

            default:
            printf("choose again\n");
        }
    }

    return 0;
}

void add(int *borrowed, int *num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]){
    if(*num_total_book==100) printf("Exceed capacity\n\n");
    else{
        printf("Enter the title: ");
        scanf("%s",book_title[*num_total_book]);
        printf("Enter the name of author: ");
        scanf("%s",book_auth[*num_total_book]);
        printf("Enter the publisher of the book: ");
        scanf("%s",book_publ[*num_total_book]);
        borrowed[*num_total_book] = 1;
        *num_total_book++;
        printf("Success to add a new book\n\n");
    }
}

void search(int *borrowed, int num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]){
    char word[30];
    printf("Enter the search word: ");
    scanf("%s",word);
    for(int i=0;i<num_total_book;i++){
       
        int k=0;
        for(int j=0;book_title[i][j];j++){
            for(;word[k];k++){
                if(book_title[i][j+k]!=word[k]){
                k=0;
                break;
                }
            }
            if(j!=0) {
                printf("title: \"%s\"\n",book_title[i]);
                printf("author: \"%s\"\n",book_auth[i]);
                printf("publisher: \"%s\"\n",book_publ[i]);
            }
        }
        printf("Not exist\n\n");
    }

}