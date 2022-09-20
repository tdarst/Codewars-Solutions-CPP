int persistence(long long n){
  
  int acc = 0;
  long long multacc = 1;
  long long save;
  long long res = n;
  
  
  while((res%10) != res)
  {
    
    while(n > 0)
    {
      save = n%10;
      n -= save;
      n /= 10;
      multacc *= save;
    }
    
    acc++;
    n = multacc;
    res = multacc;
    multacc = 1;
  }
  
  return acc;
}