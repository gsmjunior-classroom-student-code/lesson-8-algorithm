#include <stdio.h>

int main(void) {
  int n, b;
  int i = 0;
  int arr[100];
  scanf("%d %d", &n, &b);
  while(n > 0) {
    arr[i] = n % b;
    n /= b;
    i++;
  }
  for(int j = i - 1; j >= 0; j--) {
    if(arr[j] >= 10) {
      printf("%c", arr[j] + 55);
    } else {
      printf("%d", arr[j]);
    }
  }
  return 0;
}