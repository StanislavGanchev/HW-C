#ifndef PROCESSES_H
#define PROCESSES_H

struct Process {
    int ID;
    char name[30];
};

int nextProcessID(void);
int createnewprocess(char* processName);
int stopprocess(int delprocess);

extern int delprocess;
extern struct Process processes[5];
extern int processescount;

#endif
