all:taskmanager.exe processes.o

taskmanager.exe:processes.o processes.h taskmanager.c
	gcc taskmanager.c processes.o -o taskmanager.exe

processes.o:processes.c processes.h
	gcc -c processes.c -o processes.o

clean:
	del *.exe *.o