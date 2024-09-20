#include <stdio.h>

void printArray(int *list, int size);
int findItem(int *list, int size, int item);
void insertItem(int *list, int size, int insertIndex, int item);
void deleteItem(int *list, int size, int item);

int main()
{

  int list[10] = {1, 5, 8, 7, 4, 7};
  int size = (int)(sizeof(list) / sizeof(list[0]));

  printArray(list, size);
  int index = findItem(list, size, 7);
  printf("index: %d\n", index);
  insertItem(list, size, 3, 10);
  printArray(list, size);

  return 0;
}

void printArray(int *list, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d,", list[i]);
  }
  printf("\n");
}

int findItem(int *list, int size, int item) {
  for (int i = 0; i < size; i++) {
    if (list[i] == item) return i;
  }
  return -1;
}

void insertItem(int *list, int size, int insertIndex, int item) {
  for (int i = insertIndex + 1; i < size + 1; i++) {
    list[i] = list[i - 1];
  }
  list[insertIndex] = item;
}

void deleteItem(int *list, int size, int insertIndex) {
  for (int i = insertIndex; i < size - 1; i++) {
    list[i] = list[i + 1];
  }
}