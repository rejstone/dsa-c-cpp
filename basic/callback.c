#include <stdio.h>

void callback() {
  printf("Callbacking ...");
}

void callbacking(void (*ptr)()) {
  (*ptr)();
}

int main (int argc, char* argv) {
  callbacking(callback);

  return 0;
}