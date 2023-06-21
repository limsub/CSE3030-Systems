#include "copyLSB.h"

/*
 * copyLSB(x): return an int with all bits set to the least significant bit of x
 *   Example: copyLSB(5) = 0xFFFFFFFF, copyLSB(6) = 0x00000000
 *   Legal ops: ! ~ & ^ | + << >>
 */
int copyLSB(int x) {
    int A = x & 1; // least significant bit 남겨두고 그 앞에 다 0
    int B = ~A;
    int C = B + 1; // B에다 1 더해서 끝이 0이었으면 모두 1 (홀수), 끝이 1이었으면 모두 0 (짝수)

    return C;
}
