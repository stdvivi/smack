#include "smack.h"

// @flag --unroll=2
// @expect error

struct a {
  int i;
  int j;
};

int main(void) {
  struct a x = {10, 20};
  assert(x.j == 10);
  return 0;
}

