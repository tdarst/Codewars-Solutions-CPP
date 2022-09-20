#include <string>

/*

                                                                                Problem:

The other day I saw an amazing video where a guy hacked some wifi controlled lightbulbs by flying a drone past them. Brilliant.

In this kata we will recreate that stunt... sort of.

You will be given two strings: lamps and drone. lamps represents a row of lamps, currently off, each represented by x. When these lamps are on, they should be represented
by o.

The drone string represents the position of the drone T (any better suggestion for character??) and its flight path up until this point =. The drone always flies left to 
right, and always begins at the start of the row of lamps. Anywhere the drone has flown, including its current position, will result in the lamp at that position 
switching on.

Return the resulting lamps string. 

Examples:

Describe(Fly_tests)
{
    It(Basic_tests)
    {
        Assert::That(flyBy("xxxxxx", "====T"), Equals("ooooox"));
        Assert::That(flyBy("xxxxxxxxx", "==T"), Equals("oooxxxxxx"));
        Assert::That(flyBy("xxxxxxxxxxxxxxx", "=========T"), Equals("ooooooooooxxxxx"));
    }
};

*/

/*                                                                            Solution:                                                                 */

std::string flyBy(std::string lamp, std::string drone){
  
  /* find the length of the drone string and for each x up to that number in the lamps string change that x to and o then return lamp. */
  
  int n = drone.length();
  
  for (int i = 0; i < n; i++)
  {
    lamp[i] = 'o';
  }
  
  return lamp;
}
