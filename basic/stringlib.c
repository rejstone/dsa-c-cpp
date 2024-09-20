#include <string.h>
#include <stdio.h>

int main() {
  char *str = "Geeksforgeeks";
  char ch = 'r';
  char *r = strchr(str, ch);

  printf("%s - %s = %d, %d", str, r, r, str);

  return 0;
}