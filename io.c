#include <stdio.h>

#define AGE_LIMIT 18

int main () {
  char name[50];
  int age; 

  printf("Enter name: ");
  scanf("%s", name);

  printf("Enter Age: ");
  scanf("%d", &age);

  if (age <= AGE_LIMIT) {
    printf("Under Age\n");
  }else{
    printf("----------------\n");
    printf("Verified\n");
    printf("Name: %s\nAge: %d\n", name,  age);
  }
  return 0;
}
