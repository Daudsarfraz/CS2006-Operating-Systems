#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
int p;
p = fork();
printf("Job Done\n");
}
