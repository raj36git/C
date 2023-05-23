// 4.WAP to print a string in reverse order using user defined function having Pointer as argument.

#include <stdio.h>

void reverse_string(char *str) {
  int len = strlen(str);
  int i, j;

  for (i = 0, j = len - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main() {
  char str[100];

  printf("Enter a string: ");
  scanf("%s", str);

  reverse_string(str);

  printf("The reverse of the string is: %s\n", str);

  return 0;
}
