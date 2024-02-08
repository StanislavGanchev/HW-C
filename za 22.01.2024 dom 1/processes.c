#include "processes.h"
#include <stdio.h>
#include <string.h>
#define MAX_PROCESSES 5

struct Process process;
int processcount = 0;
static int processID = 1; 

int nextProcessID(void) {
    if(processID>5){
        return 0;
    }
    return processID++;
}
int createnewprocess(char* processName) {

    if (processcount > MAX_PROCESSES) {
        printf("Error: No space for a new process.\n");
        return 0;
    }
    int newProcessID = nextProcessID();

    processes[newProcessID].ID = newProcessID;
      strcpy(processes[newProcessID].name, processName);
   // snprintf(processes[1].name, sizeof(processes[1].name), "John"); 

    //  processes[processID].ID = processID;
    // processes[processID].name = processName;
    // newProcess.processID = processID;

   // printf(processes[processID].ID, "%s", processName);

    processcount++;

    printf("Process created: ID=%d, Name=%s\n", newProcessID, processName);

    return newProcessID;
}


int stopprocess(int delprocess){
    
    //proverka dali chisloto e validno
    for(int id = 1; id<=5; id++){
        if(delprocess>5 || delprocess<0){
            return 0;
        }
        // pri validno chislo triem procesa
        process[delprocess].id = 0;
        process[delprocess].name = NULL;
        //mahame praznite mesta
        for(int i=1; i<=5; i++){
            if(process[i].id > delprocess){
                process[i-1].id = i-1;
                process[i-1].name = process[i].name
            }
        }
    }

    processcount--;
}