#include <stdio.h>
int main(void) {
  char letter;
  printf("Enter a letter: ");
  scanf("%c", &letter);
  printf("%c\n", letter);
  if (...) {
    printf("You entered 'b' or 'B'.\n");
  } else {
    printf("You entered something else.\n");
  }
  return 0;
}
