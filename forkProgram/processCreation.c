#include<stdio.h>
#include<unistd.h>
// The previous 2 lines show the imports needed for the program 
int main(){
// The main is what is ran or looked for by the compiler to be able to run the program 
pid_t pid = fork();
// fork() is system call used to create new process 3 outputs bigger than 0 parent, equal to 0 child and negative fail 

if (pid == 0){
printf("This process is the child process PID: %d\n",getpid());//This block child process as the pid is equal to 0
}
else if (pid > 0){
printf("This process is the parent process PID: %d\n",getpid());//This block parent process as the PID is greater than 0
}
else{
printf("Fork Failed!");// the fork will fail if the pid is less than 0 = negative number
}
return 0;
//This is where the program process ends

}
