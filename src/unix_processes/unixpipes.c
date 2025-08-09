#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char* argv[]) {
    int fd[2]; // fd[0] -> read end -- fd[1] -> write end
    if (pipe(fd) == -1) {
        printf("An error ocurred with opening the pipe\n");
        return 1;
    }
    
    int id = fork();
    // Check for errors and closing pipe if fork failed
    if (id == -1) {
        printf("There was an error with forking<n");
        printf("We are closing the pipe to prevent leaks\n");
        close(fd[0]);
        close(fd[1]);
        return 4;
    }

    if (id == 0) {
        close(fd[0]); // Instantly close the reding pipe not used by the child process
        int x;
        printf("Please input a number\n");
        scanf("%d", &x);
        // Writing the user input to the pipe, checking for error and closing write pipe on error
        if (write(fd[1], &x, sizeof(int)) == -1) {
            printf("An error ocurred when writing to the pipe\n");
            close(fd[1]);
            return 2;
        }
        close(fd[1]); // Regularly close the write pipe after writing user input to it
        
    } else {
        close(fd[1]); // Instantly close the writing pipe not used by the parent process
        int y;
        // Reading the input from the child process to the pipe, checking for error and closing read pipe on error
        if (read(fd[0], &y, sizeof(int)) == -1) {
            printf("An error ocurred when reading from the pipe\n");
            close(fd[0]);
            return 3;
        }
        close(fd[0]);
        printf("The child process sent %d to the parent process\n", y);
        // Waiting for the child process to end to prevent zombie process
        wait(NULL); // Could still lead to problems if the child is hanging....
    }

    return 0;
}