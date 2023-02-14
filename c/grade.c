#include <stdio.h>
#include <math.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);

  double total = 0;
  for (int i = 1; i <= n; i++) {
    total = ceil(total * (i + 1) / i) + 1;
  }
  total = total - m;
  printf("%.2lf\n", total);
  return 0;
}
