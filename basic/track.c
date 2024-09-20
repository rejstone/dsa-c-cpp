#include <stdio.h>

void track() {
  printf("In file:%s, function:%s() and line:%d", __FILE__, __func__, __LINE__);
}

int main() {
  track();
}