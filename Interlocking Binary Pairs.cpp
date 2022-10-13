/*                                                                                Problem:
Write a function that checks if two non-negative integers make an "interlocking binary pair".
numbers can be interlocked if their binary representations have no 1's in the same place
comparisons are made by bit position, starting from right to left (see the examples below)
when representations are of different lengths, the unmatched left-most bits are ignored.
*/

/*                                                                                Solution: 
Take given numbers and put them through binConvert which returns a vector representation of their binary equivalents but returns the equivalent backwards so that
length difference is not an issue. Compares the two vectors element to element to see if they both have a one at the same index.
*/

std::vector<int> binConvert(int c){
  std::vector<int> bin;
  
  int i = 0;
  
  if(c == 0){return {0};}
  
  while (c > 0){
    bin.push_back(c % 2);
    c /= 2;
    i++;
  }
  
  return bin;
}

bool interlockable(unsigned long long a, unsigned long long b) {
  std::vector<int> a1 = binConvert(a);
  std::vector<int> b1 = binConvert(b);
  
  for(int i  = 0; i < 64; i++){
    if ((a1[i] == 1) && (b1[i] == 1)){return false;}
  }
  
  return true;
}
