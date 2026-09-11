#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <sys/wait.h>
int main(){
int data;
int fd[2];
int start, end;
double timetaken,comeffi;
pipe(fd);
start=clock();
if(fork()==0) {
close(fd[1]);
printf("Consumer :- \n");
for(int i=0;i<5;i++){
read(fd[0], &data, sizeof(data));
printf("Consumer %d \n", data);
}
close(fd[0]);
}
else{
close(fd[0]);
printf("Producer :- \n");
for(int i=1;i<=5; i++) {
data=i*10;
write(fd[1], &data, sizeof(data));
printf("Produced %d \n", data);
}
close(fd[1]);
wait(NULL);
end=clock();
timetaken=(double) (end-start)/CLOCKS_PER_SEC;
printf("Communication time is %lf\n", timetaken);
comeffi=(5/timetaken);
printf("Communication Efficiency is %lf \n",comeffi);
}
}
