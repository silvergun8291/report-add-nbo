// sum.cpp

#include <stdint.h>
#include <arpa/inet.h>
#include <stdio.h>
#include "sum.h"

void sum(uint32_t a, uint32_t b) {
  uint32_t x = ntohl(a);
  uint32_t y = ntohl(b);

  printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", x, x, y, y, x+y, x+y);
}
