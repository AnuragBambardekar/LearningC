#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    printf("PID of fork_6.c: %d\n", getpid());
    char *args[] = {"Hello", "World!", NULL};
    execv("./fork_6b", args); //compile 6b

    //exec() replaces the entire process, but PID remains the same
    printf("Back to fork_6");
    return 0;
}