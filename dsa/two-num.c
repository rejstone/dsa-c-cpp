#include <stdio.h>

void printArray(long long int *a, int n) {
  printf("\n--------------------------------------------\n");
  for (int i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
  printf("\n--------------------------------------------\n");
}

int main(){
  int arr[] = {0, -1, 2, -3, 1};
  int target = -2;
  int n = sizeof(arr) / sizeof(arr[0]);
  int hasOrNot = 0;

  int min = arr[0], max = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) min = arr[i];
    if (max < arr[i]) max = arr[i];
  }

  int newMax = target - min;
  int newMin = target - max;
  if(newMin < 0) {
    newMax -= newMin;
    newMin -= newMin;
  }

  int range = newMax - newMin + 1;
  printf("min: %d, max: %d, range: %d\n", min, max, range);
  long long int tmpArr[range];

  for (int i = 0; i < range; i++) {
    tmpArr[i] = -5000000000;
  }

  for (int i = 0; i < n; i++) {
    printf("%d, ", target - arr[i] + range);
    if (tmpArr[target - arr[i] + range] == arr[i] + range) {
      hasOrNot = 1;
      break;
    } else {
      tmpArr[target - arr[i] + range] = arr[i] + range;
    }
  }

  printArray(tmpArr, range);

  printf("two-sum: %d", hasOrNot);

  return 0;
}