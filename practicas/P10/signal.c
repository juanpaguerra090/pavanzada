#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void receiveSignal(int sig){
    printf("HOLA MUNDO\n");
    printf("Signal received %d\n", sig);
}

int main(){
    signal(SIGTERM, receiveSignal);
    while(1){

    }
    return 0;
}

