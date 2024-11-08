#include <stdio.h>
#include <stdint.h>

int main() {
  printf("%d, %d, %d",sizeof(uint64_t), sizeof(uint_fast64_t));
  return 0;
}