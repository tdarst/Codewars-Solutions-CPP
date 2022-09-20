int square_digits(int num) {
  int addtoNUM;
  int finalNUM = 0;
  int acc = 1;
  
  while(num > 0)
  {
    addtoNUM = num%10;
    finalNUM += addtoNUM*addtoNUM*acc;
    
    num -= num%10;
    num /= 10;
    
    acc *= 10;
    
    if (addtoNUM > 3)
    {
      acc *= 10;
    }
    
  }
  
  return finalNUM;
}