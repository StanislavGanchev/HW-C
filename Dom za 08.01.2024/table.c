#include<stdio.h>
#include<limits.h>

int main(void){
    int myChar = sizeof(char);
    int myShort = sizeof(short);
    int myInt = sizeof(int);
    int myLong = sizeof(long);
    int myLongLong = sizeof(long long);

    printf("%-10s %-10s %-10d %-10d %-10d %-10d \n", "char", "%c", myChar, SCHAR_MIN, SCHAR_MAX, USHRT_MAX);
    printf("%-10s %-10s %-10d %-10d %-10d %-10d \n", "short", "%hd", myShort, SHRT_MIN, SHRT_MAX, UINT_MAX);
    printf("%-10s %-10s %-10d %-10d %-10d %-10d \n", "int", "%d", myInt, INT_MIN, INT_MIN, UINT_MAX);
    printf("%-10s %-10s %-10d %-10d %-10d %-10d \n", "long", "%ld", myLong, LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("%-10s %-10s %-10d %-10d %-10d %-10d \n", "long long", "%lld", myLongLong, LLONG_MIN, LLONG_MAX, ULLONG_MAX);
}
