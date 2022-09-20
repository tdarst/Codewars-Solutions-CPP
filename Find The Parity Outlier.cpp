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