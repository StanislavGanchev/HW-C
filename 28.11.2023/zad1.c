#include<stdio.h>
#define SQUARE(A, B) ((A + B)*(A + B))

int main(void){
    int n1 = 7;
    int n2 = 3;

    printf("%d", SQUARE(n1, n2));

    return 0;
}