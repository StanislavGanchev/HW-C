#include<stdio.h>

int main(){
    int a, b;

    printf("\n a=");
    scanf("%d", &a);
    printf("\n b=");
    scanf("%d", &b);
    while(a%b != 0){
       a = a+a; 
    }

    printf("NOK = %d", a);

    return 0;
}