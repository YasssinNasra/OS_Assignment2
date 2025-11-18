CC = gcc

# Source files
LINKER_SOURCE_DIRECTORY = ../linkerExample/file1.c ../linkerExample/file2.c
LOADER_SOURCE_DIRECTORY = ../loaderProgram/program.c
PROCCESS_SOURCE_DIRECTORY   = ../forkProgram/processCreation.c
# Executables
LINKER_EXE = ../linkerExample/outputFiles
LOADER_EXE = ../loaderProgram/output
PROCCESS_EXE   = ../forkProgram/processCraetionOutput

all: $(LINKER_EXE) $(LOADER_EXE) $(PROCCESS_EXE)

$(LINKER_EXE): $(LINKER_SOURCE_DIRECTORY)
	$(CC) $(LINKER_SOURCE_DIRECTORY) -o $(LINKER_EXE)

$(LOADER_EXE): $(LOADER_SOURCE_DIRECTORY)
	$(CC) $(LOADER_SOURCE_DIRECTORY) -o $(LOADER_EXE)

$(PROCCESS_EXE): $(PROCCESS_SOURCE_DIRECTORY)
	$(CC) $(PROCCESS_SOURCE_DIRECTORY) -o $(PROCCESS_EXE)

run: all
	$(LINKER_EXE)
	$(LOADER_EXE)
	$(PROC_EXE)
