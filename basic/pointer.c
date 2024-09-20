#include <stdio.h>

int main() {
  char str[3] = {'a', 'b', 'c'};
  char *p = str;

  printf("%p , %p", p, str);
  return 0;
}