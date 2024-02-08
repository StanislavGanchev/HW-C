// Направете заглавен файл “schoolroom.h”, в който вмъкнете заглавния файл “person.h” и в който декларирайте структруа “SchoolRoom”, която да съдържа номер на стаята (цяло число), и информация кои хора се намират в тази стая в момента (масив от 50 елемента от тип Person).


#include "person.h"
#ifndef SCHOOL_ROOM_H
#define SCHOOL_ROOM_H

    struct SchoolRoom{
        int nomerNaStaq;
        Person horaVstaqta[50];
    };

#endif
