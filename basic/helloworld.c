#include <stdio.h>

int main () {
  printf("printf\n");
  // write(1, "Hello, World!\n", 14); avoid stdio
  puts("PUTS");
  char *str = "char*";
  while(*str) {
    putchar(*str++);
  }
  return 0;
}