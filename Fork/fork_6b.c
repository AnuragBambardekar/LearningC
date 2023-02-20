#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv[])
{
    printf("In fork_6b\n");
    printf("PID of fork_6b.c: %d\n", getpid());
    
    return 0;
}