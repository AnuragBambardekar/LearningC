#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
    int id = fork(); //child process created

    if(id == 0)
    {
        sleep(1); // Child process sleeps
    }

    // Parent ID and Current ID
    printf("Current ID: %d, Parent ID: %d\n", getpid(), getppid());
    // Old Parent process terminated, so this new Parent ID will be a zombie process
    // Current ID: 83281, Parent ID: 6358
    // Current ID: 83282, Parent ID: 1562
    
    //waits for execution of child
    // if(id != 0)
    // {
    //     wait(NULL); // can call wait even without checking if its parent
    // }

    // if this is not called (wait()), then zombie process like mentioned above
    int res = wait(NULL);
    if(res == -1)
    {
        printf("No Children to wait for.\n");
    } else {
        printf("%d finished execution.\n", res);
    }
    // Current ID: 83330, Parent ID: 6358
    // Current ID: 83331, Parent ID: 83330
    // No Children to wait for.
    // 83331 finished execution.

	return 0;
}
