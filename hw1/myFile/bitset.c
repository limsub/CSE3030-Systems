
/*
 * addNumber(set, x): Add 'x' to the bitset represented in array 'set'
 *   Assume that 0 <= x <= 127 and 'set' is a pointer to 16-byte array
 */

void addNumber(unsigned char* set, int x) {

  int bytePos = x / 8; // set의 몇 번째 인덱스에 포함되는지 계산한다.
  int bitPos = x % 8; // 그 인덱스 중 bit가 앞에서부터 얼마나 이동해야 하는지, 즉 몇 번째 비트인지 계산한다.
  
    // Check if the bit at the given position is already set
    if ( (set[bytePos] & (128 >> bitPos)) == (128>>bitPos) ) { // 이미 있을 때
        return;
    } 
    else {
        set[bytePos] |= (128 >> bitPos);
    }


  return;
}
