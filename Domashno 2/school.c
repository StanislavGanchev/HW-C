// Направете файл, който да се казва school.c и в него вмъкнете заглавните файлове “schoolclass.h” и ‘schoolroom.h” и направете структура “School”, която да съдържа училищни класове (масив от тип SchoolClass с размер 20) и училищни стаи (масив от тип SchoolRoom с размер 10). В файла school.c в main декларирайте променлива от тип school.

#include<stdio.h>
#include"schoolclass.h"
#include"schoolroom.h"

struct School{
        struct SchoolClass klasove[20];
        struct SchoolRoom stai[10];
};


int main(){

    
    return 0;
}