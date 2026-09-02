#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
int source,dest;
char buff[100];
size_t n;
source=open("f3",O_RDONLY);
dest=open("f9",O_WRONLY | O_CREAT,0644);
printf("Source file descriptor: %d\n",source);
printf("Destination file descriptor: %d\n",dest);
n=read(source,buff,100);
write(dest,buff,n);
close(source);
close(dest);
printf("File copied successfully..\n");
return 0;
}
