#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int env = 0;
  int arg = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    env++;
  for (int j = 0; j < argc; j++)
    arg++;
  printf("Number of environment variables: %d\n", env);
  printf("Number of arguments variables: %d\n", arg);
}
