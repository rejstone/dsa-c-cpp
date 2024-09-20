#include <stdio.h>
#include <string.h>

struct Book
{
  char title[50];
};

int main () {
  short int hd = 1;
  unsigned short int hu = 2;
  unsigned int u = 3;
  long int ld = 4;
  unsigned long int lu = 5;
  long long int lld = 6;
  unsigned long long int llu = 7;
  signed char ca = 'a';
  unsigned char cb = 'b';
  long double Lf = 8;

  printf("%hd %hu %u %ld %lu %lld %llu %c %c %Lf \n",hd ,hu ,u ,ld ,lu ,lld ,llu ,ca ,cb , Lf);

  struct Book b;

  strcpy(b.title, "C++ Programming");

  printf("%s", b.title);

  return 0;
}