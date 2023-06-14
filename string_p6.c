/*���� ���� ���α׷��� �����ô�. ���α׷����� ������ ���� ��ɵ��� �����Ǿ� �־�� �մϴ�.
- å�� ���� �߰��ϴ� ��� (å�� �� ������ 100 ���̶� ����. �� ��, �� å�� ������ ����, ������ �̸�, ���ǻ��̰� ���� 30�� �����̴�.)
- å�� ������ �˻��ϸ� �� å�� ������ ���;� �Ѵ�.
- ���� ���������� ����, ���ǻ� �˻� ����� �־�� �Ѵ�.
- å�� ������ ���.
- å�� �ݳ��ϴ� ���*/
#include <stdio.h>

//å�� ���� �߰��ϴ� ���
void add(int *borrowed, int *num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]);

//å�� �˻��ϴ� ���
void search(int *borrowed, int num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]);

//å�� ������ ���
void borrow();

//å�� �ݳ��ϴ� ���
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