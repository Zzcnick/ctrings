// Strings in C as char[]

#include <stdio.h>
#include <stdlib.h>

int length(char string[]) {
  int i = 0;
  while (string[i]) {
    i++;
  }
  return i;
}

int main() {

  char phrase[20];
  printf("And then he said, '%s.' What a riot!\n", phrase);
  int i;
  for (i = 0; i < 20; i++) {
    printf("%d\t: ", phrase[i]);
  }
  printf("\n");

  char sentence[] = "the quick brown fox jumps over the lazy dog";
  printf("Length: %d\n", length(sentence));

  return 0;
}
