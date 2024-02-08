#include<stdio.h>

int main(void){
    // 0000 0110
    char a = 6;    
    // one's complement -127;0 and 0;127
    // 1111 1001 - inverted bits of 6

    //two's complement -128;0 and 0;127
    //1111 1001 - one's complement
    //1111 1010 - adding 1 to one's complement
    char b = 250;
    printf("%d\n", b);

    //signed magnitute representation -127;0 and 0;127
    //1000 0110 = -6 in signed magnitute representation


    return 0;
}