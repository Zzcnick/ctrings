// More string functions in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {

  // Demonstration of strchr/strstr in the string.h library

  // Returns the pointer of the first char in a string that matches a given char
  char hide[] = "how do i do this";
  char seek = 'd';
  char *foo; // Output
  foo = strchr(hide, seek);
  printf("hide: %s\n", hide);
  printf("String starting with d in hide: %s\n", foo);
  
  // Returns the pointer of the first substring in a string that matches a given substring
  char hide2[] = "Cha cha, real smooth!";
  char seek2[] = "real";
  char *bar; // Output
  bar = strstr(hide2, seek2);
  printf("hide2: %s\n", hide2);
  printf("String starting with real in hide2: %s\n", bar);

  return 0;
}
