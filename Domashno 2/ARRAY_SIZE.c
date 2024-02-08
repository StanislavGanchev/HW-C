// Направете макро, което да се казва ARRAY_SIZE, което да съдържа големина на масив. Декларирайте масив с големина ARRAY_SIZE, само ако макрото ARRAY_SIZE е дефинирано. Елементите в масива, трябва да са последователни степени на двойката: първия елемент е 1 (2^0), вторият 2(2^1), третият 4(2^2) и така всеки следващ елемент да е следващата степен на двойката. Програмата трябва да е направена така, че ако се промени стойността на макрото, масивът да се попълва автоматично (масивът не трябва да е ръчно зададен). Програмата трябва да принтира всеки елемент на масива на нов ред. Ако макрото не е дефинирано или стойността на макрото ARRAY_SIZE е по-голяма от 10 или по-малка от 1, програмата трябва да съдържа една единствена инструкция, която да принтира съобщение на потребителя, че не е въведен размер на масива, който се поддържа от приложението.


#include<stdio.h>
#define ARRAY_SIZE 5

int main(){
    #ifdef ARRAY_SIZE
        if(ARRAY_SIZE<1 || ARRAY_SIZE>10){
            printf("Sorry, the value you choosed is not supported by our servers");
            return 0;
        }
        int array[ARRAY_SIZE];

        array[0] = 1;
        array[1] = 2;
        printf("\nElement number 1 = %d", array[0]);
        printf("\nElement number 2 = %d", array[1]);
        for(int i=1; i<ARRAY_SIZE-1; i++){
            array[i+1] = array[i]*2;
            printf("\nElement number %d = %d", i+2, array[i+1]);

        }

        return 0;
    #else 
        printf("Sorry, the value you choosed is not supported by our servers");
    #endif
}