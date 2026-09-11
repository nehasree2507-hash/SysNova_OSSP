#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
int main(){
int pid[3];
for(int i=0;i<3;i++){
pid[i]=fork();
if(pid[i]==0){
printf("Child %d pid=%d\n",i+1,getpid());
sleep(i+1);
exit(0);
}
}
wait(NULL);//waiting for any one child
printf("Parent: One child has been completed with wait()\n");
waitpid(pid[2],NULL,0);//waiting using a specific pid
printf("Parent: Child 3 has completed with waitpid()\n");//parent is checking the second child
wait(NULL);//waiting for the last child to be completed
printf("Parent: All the childs has been completed\n");//parent is checking the last child
}
