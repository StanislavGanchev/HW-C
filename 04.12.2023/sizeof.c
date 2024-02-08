#include<stdio.h>

int main(void){

    char a = 6;
    size_t sizeofA = sizeof(a);
    printf("Sizeof char var: %zu\n", sizeofA);

    int b = 12;
    size_t sizeofB = sizeof(b);
    printf("Sizeof char var: %zu\n", sizeofB);

    size_t sizeofC = sizeof(short);
    printf("Sizeof char var: %zu\n", sizeofC);

    return 0;
}