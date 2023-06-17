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
void borrow(int *borrowed);

//å�� �ݳ��ϴ� ���
void re_turn(int *borrowed);

int main(){
    printf("This is library program.\n");
    int choice=1;
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
            search(borrowed, num_total_book, book_title, book_auth, book_publ);
            break;
            
            case 3:
            printf("Borrow books\n");
            borrow(borrowed);
            break;
            
            case 4:
            printf("Return books\n");
            re_turn(borrowed);
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
//å �߰� ���
void add(int *borrowed, int *num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]){
    if(*num_total_book==100) printf("Exceed capacity\n\n");
    else{
        printf("Enter the title: ");
        scanf("%s",book_title[*num_total_book]);
        printf("Enter the name of author: ");
        scanf("%s",book_auth[*num_total_book]);
        printf("Enter the publisher of the book: ");
        scanf("%s",book_publ[*num_total_book]);
        borrowed[*num_total_book] = 0;
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
void search(int *borrowed, int num_total_book, char book_title[][30], char book_auth[][30], char book_publ[][30]){
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
            if(compare(book_title[i],word)==1){
                printf("Number: \"%d\"\n",i+1);
                printf("Title: \"%s\"\n",book_title[i]);
                printf("Author: \"%s\"\n",book_auth[i]);
                printf("Publisher: \"%s\"\n",book_publ[i]);
               if(borrowed[i]==1) printf("Borrowed\n\n");
                else printf("Can borrow\n\n");
            }
        }
    }
    //�۰� �˻�
    else if(user_choice==2){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
            if(compare(book_auth[i],word)==1){
                printf("Number: \"%d\"\n",i+1);
                printf("Title: \"%s\"\n",book_title[i]);
                printf("Author: \"%s\"\n",book_auth[i]);
                printf("Publisher: \"%s\"\n",book_publ[i]);
                if(borrowed[i]==1) printf("Borrowed\n\n");
                else printf("Can borrow\n\n");
            }
        }
    }
    //���ǻ� �˻�
    else if(user_choice==3){
        printf("Enter the search word: ");
        scanf("%s",word);
        for(int i=0;i<num_total_book;i++){
            if(compare(book_publ[i],word)==1){
                printf("Number: \"%d\"\n",i+1);
                printf("Title: \"%s\"\n",book_title[i]);
                printf("Author: \"%s\"\n",book_auth[i]);
                printf("Publisher: \"%s\"\n",book_publ[i]);
                if(borrowed[i]==1) printf("Borrowed\n\n");
                else printf("Can borrow\n\n");
            }
        }
    }
}
//å ���� ���
void borrow(int*borrowed){
    int num;
    printf("Enter the book number: ");
    scanf("%d",&num);
    if(borrowed[num-1]==1) printf("Already borrowed\n");
    else {
        borrowed[num-1]=1;
        printf("Success to borrow\n\n");
    }
}
//å �ݳ� ���
void re_turn(int*borrowed){
    int num;
    printf("Enter the book number: ");
    scanf("%d",&num);
    if(borrowed[num-1]==0) printf("not borrowed\n");
    else {
        borrowed[num-1]=0;
        printf("Success to return\n\n");
    }
}