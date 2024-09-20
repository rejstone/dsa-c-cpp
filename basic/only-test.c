// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>

// a struct to be read and written
struct person {
	int id;
	char fname[20];
	char lname[20];
};

int main()
{
  struct person input1 = { 1, "T1", "T2"};
	printf("%d", sizeof(input1));

	return 0;
}
