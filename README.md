# Operating Systems – Assignment 2
Name: Yassin Ahmed Mohamed Kamal ELdeen Nasra
ID: 2310503

This repository contains the full solution for Assignment 2 in the Operating Systems (CSE233) course.  
The assignment focuses on understanding process creation, program building, and how the operating system handles executable files at a low level.  
All required components, including code, explanations, Makefile, README, license, and screenshots, are included as part of this submission.


## Lab 5 Programs Included

The assignment required implementing the process related programs covered in Lab 5 like the Linker, Loader and the fork program.  
This repository contains examples demonstrating:

### 1. Forking Programs  
Examples that use the `fork()` system call to create new processes.

These programs demonstrate:
- How a child process is created.
- How parent and child processes run concurrently.
- How process IDs differ between parent(PID>0) and(PID=0) child.


### 2. Process Manipulation  
Examples that show:
- starting a background process(ex: Sleep 100 &).
- stopping the background process(ex: kill -STOP <PID>).
- resuming the background process(ex: kill -CONT <PID>).
- terminating a process(ex: kill <PID>).

Each program has a written explanation describing what it does.

## Linker Explanation

The **Linker** is responsible for taking one or more compiled object files (`.o`) and combining them into a final executable program.  
It performs tasks such as:

- Resolving external symbols (functions and variables declared in other files or libraries).
- Connecting the program with standard system libraries shared between the files linked.
- Producing the final compiled executable.

A full explanation is included in the answers file.

## Loader Explanation

The **Loader** runs when a program is executed.  
Its job is to:

- Load the executable file from disk into RAM.
- Set up memory segments (text, data, heap, and stack).
- Start execution at the program’s entry point (usually the `main` function).

A detailed explanation is included in the answers file.

## Makefile

A Makefile is included to compile all example programs efficiently.  
It allows the user to:

- Build all programs with a single command.
- Compile individual programs.
  navigate to the makefileExample folder and run the following command to run complile and run all of the programs
  ```bash
  make run
  
