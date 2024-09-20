#include <conio.h>
#include <stdio.h>

int main() {
  // %[flags][width][.precision][length]specifier
  char str[50];
  printf("Enter: ");
  scanf("%s", str);
  printf("%d, %.2f, %c, %2s, %p, %x", 1, 1.2, 'C', str, str, str);

  printf("\ngetch: ");
  // getch();
  printf("\ngetche: ");
  // getche();
  printf("\ngetchar: ");
  // str[0] = (char)getchar();
  // putchar(str[0]);
  printf("%d", getchar());
  // printf("\ngets: ");
  // gets(str);
  // puts(str);

  return 0;
}

