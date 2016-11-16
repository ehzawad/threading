#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void dummy()
{
    pid_t pid1 = fork();
    pid_t pid2 = fork();

    printf("process 1 %d\n", pid1);
    printf("process 2 %d\n", pid2);
}

int main(void)
{
    printf("Starting from the main function %d\n", getpid());
    dummy();
    return 0;
}
