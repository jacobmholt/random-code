#include <stdio.h>
int main(void) {
  int a;
  for (;scanf("%d", &a) > 0 && a < 100 && a != 42;) {
  }
  return 0;
}
