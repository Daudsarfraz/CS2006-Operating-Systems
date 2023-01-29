#include <stdio.h>
#include <stdlib.h>
int main()
{
struct coord
{
int x, y, z;
};
struct coord *p;
p = malloc(sizeof(struct coord));
if (p==NULL)
{
printf("Failed");
}
else
{
printf("\n%d bytes allocated at address %d\n",
sizeof(struct coord), p);
}
return 0;
}