#include <set>
#include <cctype>

/*                                                                                Problem:

An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is
an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)

*/

/*                                                                                Solution:                                                                 

for each character in the string add it to a set to reduce any similar letters and then check whether the resulting set is of the same length as the original string 
returning true if the string is an isogram and false if it is not.

*/

bool is_isogram(std::string str) {
 std::set<char> charset;
  
 for(int i = 0; i < str.length(); i++)
 {
    
   charset.insert(tolower(str[i]));
    
 }
  
 return (charset.size() < str.length()) ? false : true;
}
