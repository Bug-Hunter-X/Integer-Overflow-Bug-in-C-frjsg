#include <stdio.h>
#include <limits.h>

int main() {
  int x = INT_MAX; 
  int y = 10;
  // Check for potential overflow before adding
  if (x > INT_MAX - y) {
    printf("Integer overflow would occur!\n");
    return 1;
  }
  x += y;
  printf("%d\n", x);
  return 0;
}
