#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char* argv[]) {
    
    // int id = fork();
    // printf("Hello World from %d\n", id);

    // if (id == 0) {
    //     printf("Hello from the child process\n");
    // } else {
    //     printf("Hello from the main process\n");
    // }

    int id = fork();
    if (id != 0) {
        fork();
    }
        
    printf("Hello World from process id %d\n", id);
    // printf("Hello World from process id %d der id %d geforkt hat\n", getpid(), getppid());
    
    return 0;
}