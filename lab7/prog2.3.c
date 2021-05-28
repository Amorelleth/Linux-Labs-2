#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t PID[10];

    int num = 10;
    sleep(3);
    for (int i = 0; i < num; ++i)
    {
        PID[i] = fork();
        if (PID[i] < 0)
        {
            abort();
        }
        else if (PID[i] == 0)
        {
            sleep(1);
            exit(0);
        }
    }

    pid_t pid;
    for (int i = 0; i < num; ++i)
    {
        pid = wait();
        printf("Process with PID %d exited\n", pid);
    }

    return 0;
}
