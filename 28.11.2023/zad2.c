#include<stdio.h>

int main(void){
    int a = 18;
    int b = 12;
    int nok;

    if(a > b){
        nok = a;
        while(nok % b != 0){
            nok += a;
        }
    }else{
        nok = b;
        while(nok % a != 0){
            nok +=b;
        }
    }

    printf("here is  nok:  %d", nok);
    return 0;
}    