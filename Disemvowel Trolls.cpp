# include <string>

std::string disemvowel (const std::string& str) {
    std::string a;
  
    for(int i = 0; i < str.length(); i++){
      
      if (str[i] != 'a' and str[i] != 'e' and str[i] != 'i' and str[i] != 'o' and str[i] != 'u' and str[i] != 'A' and str[i] != 'E' and str[i] != 'I' and str[i] != 'O' and str[i] != 'U')
      {
        a += str[i];
      }
      
    }
  
  return a;
}