PROC_SRC  = ../forkProgram/processCreation.c
LINK_SRC = ../linkerExample/file1.c ../linkerExample/file2.c
LOAD_SRC = ../loaderProgram/program.c

PROC_EXE   = ../forkProgram/processCreationOutput
LINK_EXE = ../linkerExample/outputFiles 
LOAD_EXE = ../loaderProgram/output

CC = gcc

all: $(LINK_EXE) $(LOAD_EXE) $(PROC_EXE)
$(LINK_EXE): $(LINK_SRC)
	$(CC) $(LINK_SRC) -o $(LINK_EXE)
$(LOAD_EXE): $(LOAD_SRC)
	$(CC) $(LOAD_SRC) -o $(LOAD_EXE)
$(PROC_EXE): $(PROC_SRC)
	$(CC) $(PROC_SRC) -o $(PROC_EXE)
run: all
	$(LINK_EXE)
	$(LOAD_EXE)
	$(PROC_EXE)
