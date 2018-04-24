#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main(){
    int pid;
    pid = fork();
    if(pid == 0){
        fork();
        if(pid == 0){
            printf("I am the daemon!\n");
            close(stdin);
            close(stdout);
            close(stderr);
            umask(0);
            chdir("/tmp");
            while(1){

            }
        }
        wait(NULL);
    }
}