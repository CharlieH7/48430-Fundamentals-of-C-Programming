#include <stdio.h>

int main (void)
{
  int a = 1, b = 2;
  int* ptr = &b;

  /* your code goes here */
  printf("The value of ptr before is %i\n", *ptr);
  // 1. What are the values of - a, b, ptr ?
  //printf("%i, %i, %i\n", a, b, *ptr);
  // 2. What are the locations of - a, b, ptr (yes, the location of the pointer ptr) ?
  //printf("%p, %p, %p\n", &a, &b, &ptr);
  ptr++;
  printf("The value of ptr after is %i\n", *ptr);
  return 0;
}
