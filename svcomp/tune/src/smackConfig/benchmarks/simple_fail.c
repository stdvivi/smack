#include <stdio.h>
#include <stdlib.h>
#include "smack.h"

// @flag --unroll=2
// @expect error

int main(void) {
  int a;

  a = 1;
  a = -1;
  assert(a != -1);
  return a;
}

