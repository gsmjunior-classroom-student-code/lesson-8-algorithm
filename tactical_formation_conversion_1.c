#include <stdio.h>

int main(void) {
  char n[100];
  int b, i, res = 0, c = 1;
  scanf("%s %d", n, &b);
  for(i = 0; n[i] != '\0'; i++) {
    if(n[i] >= 'A' && n[i] <= 'Z') {
      res = res * b + (n[i] - 'A' + 10);
    } else {
      res = res * b + (n[i] - '0');
    }
  }
  printf("%d", res);
  return 0;
}
