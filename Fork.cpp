#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>


int main(int argc, char* argv[])
{

pid_t childPIDorZero = fork();

if (childPIDorZero < 0)
{
    perror("fork() error");
    exit(-1);
}

if (childPIDorZero != 0)
{
    printf("I am the parent %d,my child is %d\n",getpid(),childPIDorZero);
    wait(NULL);
}

else
{
    printf("I am the child %d and my parent is %d\n",getpid(),getppid());
    sleep (10);
    printf("Done with child\n");
}


return 0;
}
