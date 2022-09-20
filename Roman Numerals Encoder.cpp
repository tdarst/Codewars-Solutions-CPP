#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
                                                                                Problem:

Create a function that takes a Roman numeral as its argument and returns its value as a numeric decimal integer. You don't need to validate the form of the Roman
numeral.

Modern Roman numerals are written by expressing each decimal digit of the number to be encoded separately, starting with the leftmost digit and skipping any 0s. So 
1990 is rendered "MCMXC" (1000 = M, 900 = CM, 90 = XC) and 2008 is rendered "MMVIII" (2000 = MM, 8 = VIII). The Roman numeral for 1666, "MDCLXVI", uses each letter in 
descending order.

Example:

solution("XXI"); // => 21

*/


int solution(string roman) {
  /* integer to accumulate value of roman numerals */
  int total = 0;
  
  /* dictionary mapping roman numerals to integer values */
  std::map <char, int> numeralMap;
  numeralMap['I'] = 1;
  numeralMap['V'] = 5;
  numeralMap['X'] = 10;
  numeralMap['L'] = 50;
  numeralMap['C'] = 100;
  numeralMap['D'] = 500;
  numeralMap ['M'] = 1000;
  
  /* for each character, if the character ahead of it is of larger value consider the two characters to be one character equal to 
                         latter - former and then accumulate its character's value to the total and skip ahead one iteration.
                         
                         else accumulate its character's value to the total.
                         
     return the final value of total.
  */
  for (unsigned long i = 0; i < roman.length(); i++)
  {
    if (numeralMap[roman[i]] < numeralMap[roman[i+1]])
    {
      total += numeralMap[roman[i+1]] - numeralMap[roman[i]];
      i++;
    }
    
    else
    {
      total += numeralMap[roman[i]];
    }
    
  }
  
  return total;
}
