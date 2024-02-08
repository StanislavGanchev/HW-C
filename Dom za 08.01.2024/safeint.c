#include"safeint.h"

int safeadd(void){
    int a,b,res;
    printf("a = \n");
    scanf("%d", &a);
    printf("b = \n");
    scanf("%d", &b);

    if(a%1 != 0 || b%1 != 0){
        return -1;
    }else{
        res = a+b;
        SafeResult.value = res;
    }
}

    int safesubtract(void){
    int a,b,res;
    printf("a = \n");
    scanf("%d", &a);
    printf("b = \n");
    scanf("%d", &b);

    if(a%1 != 0 || b%1 != 0){
        return -1;
    }else{
        res = a-b;
        SafeResult.value = res;
    }
}

    int safemultiply(void){
    int a,b,res;
    printf("a = \n");
    scanf("%d", &a);
    printf("b = \n");
    scanf("%d", &b);

    if(a%1 != 0 || b%1 != 0){
        return -1;
    }else{
        res = a*b;
        SafeResult.value = res;
    }
}

int safedivide(void){
    int a,b,res;
    printf("a = \n");
    scanf("%d", &a);
    printf("b = \n");
    scanf("%d", &b);

    if(a%1 != 0 || b%1 != 0){
        return -1;
    }else{
        res = a/b;
        return res;
    }
}

int safestrtoint(void){
    char a,b;
    int res;
    printf("a = \n");
    scanf("%c", &a);
    printf("b = \n");
    scanf("%c", &b);

    SafeResult.value = atoi(a), atoi(b);
}