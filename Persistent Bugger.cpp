/*
                                                                                  Problem:
Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the 
digits in num until you reach a single digit.

For example (Input --> Output):

39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit)
999 --> 4 (because 9*9*9 = 729, 7*2*9 = 126, 1*2*6 = 12, and finally 1*2 = 2)
4 --> 0 (because 4 is already a one-digit number)
                                                                                  

*/

/*                                                                                Solution:                                                                       */

int persistence(long long n){
  
  int acc = 0;
  long long multacc = 1;
  long long save;
  long long res = n;
  
  /* While the number is not a single digit number*/
  while((res%10) != res)
  {
    
    /* 
    splits off the last digit of the number and then multiplies it with the next to last digit of the number and repeats this process until all digits of the number
    have been multiplied together to create a new number. For each repetition of the following process, acc is increased by one and then returned when the finally a
    single digit number has been produced by the multiplication process.
    */
    
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
