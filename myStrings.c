// Zicheng Zhen
// Systems
// 2016-09-28
// HW#01 - Recreating string.h

#include <stdio.h>
#include <string.h>

// Function Headers
// =======================================================
int myStrlen(char *s);
char* myStrcpy(char *dest, char* src);
char* myStrcat(char *dest, char* src);
int myStrcmp(char *s1, char *s2);
char* myStrchr(char *s, char c);

// Function Definitions
// =======================================================
int myStrlen(char *s) {
  int i = 0;
  while (*s) {
    s++;
    i++;
  }
  return i;
}

char* myStrcpy(char *dest, char *src) {
  char *it = dest;
  while (*src) {
    *it = *src;
    it++;
    src++;
  }
  *(it++) = 0; // Terminate string
  return dest;
}

char* myStrcat(char *dest, char *src) {
  char *it = dest;
  while (*it)
    it++; // Navigate to end of dest string
  while (*src) {
    *it = *src;
    it++;
    src++;
  }
  *(it++) = 0; // Terminate string
  return dest;
}

int myStrcmp(char *s1, char *s2) {
  while (1) {
    if (*s1 || *s2) { // At least one is not 0
      if (*s1 == *s2) {s1++; s2++;}
      else {return *s1 - *s2;}
    } else { // Both are 0
      return 0;
    }
  }
}

char* myStrchr(char *s, char c) {
  while (*s) {
    if (c == *s)
      return s;
    s++;
  }
  return NULL; // Will return null if it terminates
}

// Testing
// =======================================================
int main() {
  // Several Test Sentences
  char phrase1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char phrase2[] = "0123456789";
  char phrase3[] = "Everyone is welcome to the CS Dojo";
  char phrase4[] = "";
  char phrase5[] = "abcdefghij";
  char phrase6[] = "abcdefghij";
  printf("Phrase 1: %s\nPhrase 2: %s\nPhrase 3: %s\nPhrase 4: %s\nPhrase 5: %s\nPhrase 6: %s\n",
	 phrase1, phrase2, phrase3, phrase4, phrase5, phrase6);
  
  // Strlen
  printf("\nTesting strlen:\n");
  printf("C  strlen of phrase 2: %zd\n", strlen(phrase2));
  printf("My strlen of phrase 2: %d\n" , myStrlen(phrase2));
  printf("C  strlen of phrase 4: %zd\n", strlen(phrase4));
  printf("My strlen of phrase 4: %d\n" , myStrlen(phrase4));

  // Strcpy
  printf("\nTesting strcpy:\n");
  printf("C  strcpy of phrase 2 to phrase 1: %s\n", strcpy(phrase1,phrase2));
  printf("My strcpy of phrase 5 to phrase 1: %s\n", myStrcpy(phrase1,phrase5));
  printf("C  strcpy of phrase 4 to phrase 1: %s\n", strcpy(phrase1, phrase4));
  printf("My strcpy of phrase 4 to phrase 1: %s\n", myStrcpy(phrase1, phrase4));  

  // Strcmp
  printf("\nTesting strcmp:\n");
  printf("C  strcmp of phrase 3 to phrase 5: %d\n", strcmp(phrase3,phrase5));
  printf("My strcmp of phrase 3 to phrase 5: %d\n", myStrcmp(phrase3,phrase5));
  printf("C  strcmp of phrase 2 to phrase 5: %d\n", strcmp(phrase2,phrase5));
  printf("My strcmp of phrase 2 to phrase 5: %d\n", myStrcmp(phrase2,phrase5));
  printf("C  strcmp of phrase 6 to phrase 5: %d\n", strcmp(phrase6,phrase5));
  printf("My strcmp of phrase 6 to phrase 5: %d\n", myStrcmp(phrase6,phrase5));
 
  // Strchr
  printf("\nTesting strchr:\n");
  printf("C  strchr of 'C' in phrase 3: %s\n", strchr(phrase3,'C'));
  printf("My strchr of 'C' in phrase 3: %s\n", myStrchr(phrase3,'C'));
  printf("C  strchr of 'Z' in phrase 3: %s\n", strchr(phrase3,'Z'));
  printf("My strchr of 'Z' in phrase 3: %s\n", myStrchr(phrase3,'Z'));
  printf("C  strchr of '5' in phrase 5: %s\n", strchr(phrase5,'5'));
  printf("My strchr of '5' in phrase 5: %s\n", myStrchr(phrase5,'5'));

  // Reprint Phrase 1
  printf("\nPhrase 1: %s\n", phrase1);
  // Phrase 1: 01234567890123456789abcdefghijabcdefghij

  // Strcat - Overwriting Some Bytes, Fix Tomorrow
  printf("\nTesting strcat:\n");
  printf("C  strcat of phrase 2 to phrase 1: %s\n", strcat(phrase1,phrase2));
  printf("My strcat of phrase 2 to phrase 1: %s\n", myStrcat(phrase1,phrase2));
  printf("C  strcat of phrase 5 to phrase 1: %s\n", strcat(phrase1,phrase5));
  printf("My strcat of phrase 5 to phrase 1: %s\n", myStrcat(phrase1,phrase5));
}
