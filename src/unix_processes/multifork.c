#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>

int main (int argc, char* argv[]) {

    int id1 = fork();
    int id2 = fork();
        if (id1 == 0) {
            if (id2 == 0) {
                printf("We are process y with PID %d\n", getpid());
            } else {
                printf("We are process x with PID %d\n", getpid());
            }
        } else {
            if (id2 == 0) {
                printf("We are process z with PID %d\n", getpid());
            } else {
                printf("We are the parent process! with PID %d\n", getpid());
            }
        }
        while(wait(NULL) != -1 || errno != ECHILD) {
            printf("PID %d here. We waited for a child process to finish\n", getpid());
        }

    return 0;
}