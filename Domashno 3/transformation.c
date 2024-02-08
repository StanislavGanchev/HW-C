// Направете сорс файл (transformation.c), който да вмъква заглавния файл и да дефинира функцията. Изпълнете първите три стъпки на компилацията до образуване на обектен файл (от сорс файла transformation.c).


#include <stdio.h>
#include "transformation.h"

int newVmaker(char c){
    char c;
    struct Transformation newV;
    printf("\n your char = ");
    scanf("%c", &c);

    newV = intmaker(c);

    printf("your new variable = %s", newV);

    return 0;
}