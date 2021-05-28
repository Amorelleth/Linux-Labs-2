#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
    char **p;
    int sum = 0;
    for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
        sum++;
    //printf("%s\n", *p); /* разыменование указателя */
    printf("Number of environment variables: %d\n", sum);
}
