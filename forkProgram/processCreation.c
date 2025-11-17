#include<stdio.h>
#include<unistd.h>
int main(){
pid_t pid = fork();
if (pid == 0){
printf("This process is the child process PID: %d\n",getpid());//This block child process as the pid is equal to 0
}
else if (pid > 0){
printf("This process is the parent process PID: %d\n",getpid());//This block parent process as the PID is greater than 0
}
else{
printf("Fork Failed!");// the fork will fail if the pid is less than 0  and this happen when no resources for process
}
return 0;
//This is where the program process end

}
