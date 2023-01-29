You need to complete and submit the task within the lab.

- Write your very firrst C program for linux. Name it as myFirst.c. Your program should
prompt the user for his name, and then should display the name on the shell. Tip: Use the
printf() and the scanf() calls for this purpose & remember to check their respective man
pages as well (man printf & man scanf)

- To run a linux command from your program, we can use the system() function. Use the
following inside your myFirst.c program and see it's output.
system("ls");

- Using the system() function, do the following:
1. Create a directory with the name test in your current directory.
2. Then display the contents of that directory
3. Finally erase the test directory
