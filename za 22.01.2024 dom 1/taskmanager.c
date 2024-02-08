#include<stdio.h>
#include "processes.h"

int main(void){
    int a;
    char name[30];
    printf("There are 4 options. choose one of them:\n click 1 for create a new process.\nclick 2 for list all.\nclick 3 for stop process\nclick 4 for exit:\n ");
    
    scanf("%d", &a);
    if(a == 1){
        int i = 0;
        printf("How much processes would you like? Max is 5: ");
        scanf("%d", &i);
        if(i<1 || i>5){
            printf("Invalid number of processes");
        }else{
            for(int b=0; b<i; b++){
                printf("\n Name of the process:");
                scanf("%c", &name);
                processes[1].ID = createnewprocess(name);
            }
        }
    }
    if(a == 2){
        while(processes.id != 0){
            printf("%p", processes[id, name]);
            id++;
        }
    }
    if(a == 3){
        int a;
        printf("\nWhat process do you want to stop");
        scanf("%d", &a);
        stopprocess(a);
    }
    if(a == 4){
        break;
    }
}
