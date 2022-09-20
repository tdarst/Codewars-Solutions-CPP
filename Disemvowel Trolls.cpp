/*                                                                                  Problem:

Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.

*/


/*                                                                                  Solution:                                                                       */


/* 
    Simply checks if each character in the passed-in string is a vowel or not and if it isn't a vowel it is added to a different string which is returned at the end.
    Not very proud of this solution, will come back and find a more graceful one.
*/

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
