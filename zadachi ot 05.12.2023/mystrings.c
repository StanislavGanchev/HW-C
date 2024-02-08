#include<stdio.h>
#include"mystrings.h"


int strlength(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int strconcat(char *str1, char *str2){
    int len = 0;
    while(str1[len] != '\0'){
        len++;
    }
    int i = 0;
    for(i = 0; str2[i] != '\0'; i++){
        str1[len+i] = str2[i];
    }
    return str1;
}
int strcompare(char *str1, char *str2){
    int string1 = 0, string2 = 0,i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1; 
        } else if (str1[i] > str2[i]) {
            return 1; 
        }
        i++;
    }

    if(str1 == str2){
        return 0;
    }else if(string1 > string2){
        return 1;
    }else if(string2 > string1){
        return -1;
    }

}