#include <stdio.h>

int find_divider(int a, int b) {
  int tmp;
  while (!(a == 0 || b == 0 || a % b == 0)) {
    tmp = b;
    b = a%b;
    a = tmp;
  }
  return b;
}

void reduce_fraction(int * a, int * b) {
  int x = *a;
  int y = *b;
  int divider = find_divider(x, y);
  *a = x / divider;
  *b = y / divider;
}

// int main() {
//   int a, b;
//   scanf("%d %d", &a, &b);
//   printf("%d\n", find_divider(a, b));
//   reduce_fraction(&a, &b);
//   printf("%d %d", a, b);
//   return 0;
// }