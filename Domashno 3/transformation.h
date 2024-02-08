#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <stdio.h>
#include <string.h>

struct Transformation {
    long result;
    char error[100];
};

struct Transformation intmaker(char charV) {
    struct Transformation transform; 
    long longV = (long)charV;
    if(longV == (long)longV){
        transform.result = longV;
        transform.error[0] = '\0';
        return transform;
    }else{
        transform.result = 0;
        strncpy(transform.error, "Invalid string to convert to a long variable", sizeof(transform.error) - 1);
    }
    
}

#endif
