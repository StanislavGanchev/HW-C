#include<stdio.h>
void main(){
    int num1,num2,nok;

    printf("\n num1=");
    scanf("%d", &num1);

    printf("\n num2=");
    scanf("%d", &num2);

    nok=num1;

    while(nok%num2 != 0){
        nok = nok+num1;
    }

    printf("NOK za %d i %d e %d", num1,num2,nok);
}
