#include <cs50.h>
#include <stdio.h>

int main(void) {

  int x = get_int("What is the value of x? ");
  int y = get_int("What is the value of y? ");

  if (x < y) {
    printf("x is less than y\n");
  }
  else if (x > y) {
    printf("x is greater than y\n");
  }
  else if (x == y) {
    printf("x and y are equal\n");
  }
}