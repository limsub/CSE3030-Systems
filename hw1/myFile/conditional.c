#include "conditional.h"

/*
 * conditional(x, y, z): same as x ? y : z
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 */
int conditional(int x, int y, int z) {

  //int A = !x +(- 1);
  int A = ~(!x) + 1;
  
  //int B = A^(-1);
  int B = A^(~1 + 1);
  
  int C = (B&y) + (A&z);

  return C;
}

