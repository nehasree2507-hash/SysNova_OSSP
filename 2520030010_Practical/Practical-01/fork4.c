#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){
char command[100];
printf("Enter command: ");
scanf("%s",command);
int pid;
pid=fork();
if(pid==0){
printf("Child Process\n");
printf("Child process id is %d\n",getpid());
printf("parent process id is %d\n",getppid());
execlp(command, command, (char *)NULL);
}
else if(pid>0){
printf("parent process\n");
printf("parent process id is %d\n",getpid());
printf("my parent process id is %d\n",getppid());
wait(NULL);
}
else
printf("not succesful");
}
