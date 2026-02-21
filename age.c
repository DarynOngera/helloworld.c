#include <stdio.h>

int main() {
  int age;

  printf("Enter age: ");
  scanf("%d", &age);

  if (age <= 18) {
    printf("Under Age\n");
  }else{
    printf("Verified\n");
  }

  return 0;
}
