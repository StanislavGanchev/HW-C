#include<stdio.h>

int main(void){

    int b[3] = {1, 2, 3};
    size_t sizeofArr = sizeof(b);
    printf("Size of arr: %zu\n", sizeofArr);

    return 0;
}