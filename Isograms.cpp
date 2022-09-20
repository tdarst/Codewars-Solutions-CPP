#include <set>
#include <cctype>
bool is_isogram(std::string str) {
  std::set<char> charset;
  
  for(int i = 0; i < str.length(); i++)
  {
    
    charset.insert(tolower(str[i]));
    
  }
  
  return (charset.size() < str.length()) ? false : true;
}