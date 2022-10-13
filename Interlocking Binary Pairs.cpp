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