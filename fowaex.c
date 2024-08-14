#include "main.h"

int main() {
    for (int i = 0; i < 5; i++) {
        pid_t pid = fork();

        if (pid < 0) {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) {
            /* Child process */
            execlp("ls", "ls", "-l", "/tmp", (char *)NULL);
            perror("execlp");
            exit(EXIT_FAILURE);
        } else {
            /* Parent process */ 
            wait(NULL);
        }
    }

    return 0;
}
