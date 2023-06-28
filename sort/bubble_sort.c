#include <stdio.h>
void bubble_sort(int list[],int n);
int main(){
    int data[10] = {1,1,3,4,5,5,6,7,4,6};
    bubble_sort(data,10);
    for(int i=0;i<10;i++) printf("%d\t",data[i]);
    return 0;
}
void bubble_sort(int list[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(list[j]<list[j+1]){      //descending order
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}