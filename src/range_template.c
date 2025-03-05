#include <stdio.h>
int main(void) {
  int i, m, n;
  printf("Enter i, m, n: ");
  scanf("%d %d %d", &i, &m, &n);
  printf("%d %d %d", i, m, n);
  if (...) {
    printf("%d is in [%d,%d).\n", i, m, n);
  } else {
    printf("%d is NOT in [%d,%d).\n", i, m, n);
  }
  return 0;
}
