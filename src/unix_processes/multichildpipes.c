#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {
    int fd[2];
    if (pipe(fd) == -1) {
        perror("pipe");
        return 1;
    }

    const int num_children = 3;
    for (int i = 0; i < num_children; ++i) {
        pid_t pid = fork();
        if (pid == -1) {
            perror("fork");
            return 2;
        }

        if (pid == 0) {
            // Kindprozess
            close(fd[0]); // Nicht lesen
            int number = i * 100;
            write(fd[1], &number, sizeof(int));
            close(fd[1]);
            printf("Child #%d wrote %d to the pipe\n", i, number);
            return 0; // Fertig
        }
        // Elternprozess: macht mit nächstem Kind weiter
    }

    // Elternprozess: liest num_children Werte
    close(fd[1]); // Nicht mehr schreiben
    for (int i = 0; i < num_children; ++i) {
        int value;
        read(fd[0], &value, sizeof(int));
        printf("Parent received: %d\n", value);
    }
    close(fd[0]);

    // Warten auf alle Kinder
    for (int i = 0; i < num_children; ++i) {
        wait(NULL);
    }

    return 0;
}
