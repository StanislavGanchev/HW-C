#include<stdio.h>
#define STEPEN(a, b) ( (a+b) * (a+b) )

int main(){

    int a,b;
    printf("\n a=");
    scanf("%d", &a);
    printf("\n b=");
    scanf("%d", &b);
    int res = STEPEN(a,b);
    printf("\n res = %d", res);

    return 0;
}