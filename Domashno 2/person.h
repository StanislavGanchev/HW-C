// Направете заглавен файл “person.h”, който да декларира структура “Person”, която да съдържа информация, за името на човека (масив от 20 символа), неговото презиме (масив от 20 символа) неговата фамилия (масив от 20 символа) и в коя година е роден (цяло число).



// gard na hedur faila
#ifndef PERSON_H
#define PERSON_H    
    struct Person
    {
        char ime[20];
        char prezime[20];
        char familiq[20];
        int godina;
    };
#endif