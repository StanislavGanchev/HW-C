// Направете заглавен файл “schoolclass.h”, който да вмъква заглавния файл “person.h” и да декларира структура “SchoolClass” (клас), която да съдържа масив от 26 ученика (от структурата Person), паралелката на класа  (символ), номера на класа (цяло число) и класен ръководител (поле от тип Person).



#include "person.h"
#ifndef SCHOOL_CLASS_H
#define SCHOOL_CLASS_H

struct SchoolClass{
    char paralelka[1];
    int nomer;
    Person uchenici[26];
    Person  klasen;
};

#endif