
// count the number of vowel strings in range solutions

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int vowelStrings(vector<string> &words, int left, int right)
  {
    int vowlWords{0};
    for (int a = left; (a <= right) && (a < words.size()); a++)
    {
      if ((words[a].front() == 'a' || words[a].front() == 'e' || words[a].front() == 'i' || words[a].front() == 'o' || words[a].front() == 'u') &&
          (words[a].back() == 'a' || words[a].back() == 'e' || words[a].back() == 'i' || words[a].back() == 'o' || words[a].back() == 'u'))
      {
        vowlWords++;
      }
    }
    return vowlWords;
  }
};