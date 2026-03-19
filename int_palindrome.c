#include <stdbool.h>
#include <stdio.h>

int checkPalindrome(int x) {
  int original = x;
  long rev_num = 0;

  if (x < 0 ) return false;
  while (x > 0 ){
    rev_num = rev_num * 10 + x % 10;
    x = x / 10;
  }
  return rev_num == original;
}

int main() {
  int x = 1020;
  bool y = checkPalindrome(x);

  printf("%s\n", y ? "true" : "false");
  return 0;
}
