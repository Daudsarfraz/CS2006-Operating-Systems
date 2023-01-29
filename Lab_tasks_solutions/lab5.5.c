#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
int p;
printf("Original Process, pid = %d\n", getpid() );
p = fork();
if (p == 0)
{
printf("Child PID = %d, PPID = %d\n",
getpid(), getppid() );
}
else
{
printf("Parent PID = %d, Child ID = %d\n",
getpid(), p);
}
}