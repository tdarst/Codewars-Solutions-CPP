/*                                                                             Problem:

You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or
entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.

Examples
[2, 4, 0, 100, 4, 11, 2602, 36]
Should return: 11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21]
Should return: 160 (the only even number)

*/



/*                                                                             Solution:                                                                            */

/* 
    Searches through the array to find either at least two evens and one odd or at least two odds and one even then returns the singular even or odd as the outlier in
    the array.
*/

int FindOutlier(std::vector<int> arr)
{
    int result;
    int oddcount;
    int evencount;
    int oddmark;
    int evenmark;
  
    for (int i = 0; i < arr.size(); i++)
    {
      
      if (arr[i]%2 == 0)
      {
        evencount += 1;
        evenmark == i;
      }
      
      if (arr[i]%2 != 0)
      {
        oddcount += 1;
        oddmark == i;
      }
      
      if (evencount >= 2 and oddcount == 1)
      {
        result = arr[oddmark];
        return result;
      }
      
      if (oddcount >= 2 and evencount == 1)
      {
        result = arr[evenmark];
        return result;
      }
    }
  
  
    return result;
}
