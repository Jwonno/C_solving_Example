#include <stdio.h>
#include "module2_human.h"
int main(){
    struct Human Lee = Create_Human("Lee", 40, MALE);

    Print_Human(&Lee);

    return 0;
}