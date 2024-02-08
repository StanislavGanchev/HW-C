#include<stdio.h>
#include<limits.h>

int main(void){

    printf("CHAR MAX: %d\n", CHAR_MAX);
    printf("CHAR MIN: %d\n", CHAR_MIN);
    printf("UNSIGNED CHAR MAX: %d\n", UCHAR_MAX);

    printf("LONG MAX: %d\n", LONG_MAX);

    char a = CHAR_MAX;
    printf("Before: %d\n, a");
    a++;
    printf("AFter: %d\n", a);

    return 0;
}