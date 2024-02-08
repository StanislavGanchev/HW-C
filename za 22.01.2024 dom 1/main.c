#include<stdio.h>
#include"processes.h"

int main(void){

    int processID = nextProcessID();
    printf("Next Process ID: %d\n", processID);

    int newProcessID = createnewprocess("MyNewProcess");

    if (newProcessID != 0) {
        printf("New process created with ID: %d\n", newProcessID);
    } else {
        printf("Failed to create a new process.\n");
    }

    return 0;
}