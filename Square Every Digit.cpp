/*                                                                                 Problem:

Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1.

Note: The function accepts an integer and returns an integer

Example:

Describe(Square_Every_Digit)
{
    It(Sample_tests)
    {       
        Assert::That(square_digits(3212), Equals(9414));   
        Assert::That(square_digits(2112), Equals(4114)); 
        Assert::That(square_digits(0), Equals(0));
        Assert::That(square_digits(13579), Equals(19254981));   
        Assert::That(square_digits(24680), Equals(41636640)); 
    }  
};

*/

/*                                                                                Solution:                                                                         */


/*
    Seperate each digit from the back and then square it's value, if it's square is two digits then multiply it by 10 twice instead of once in order to "make room"
    for it in the final number. After seperating the value subtract it from the original number and repeat the process until the original number is  0.
*/

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
