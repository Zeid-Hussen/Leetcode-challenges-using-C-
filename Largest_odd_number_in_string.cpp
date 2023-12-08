#include <string>
#include <cstring>
using namespace std;
class Solution
{
public:
  string largestOddNumber(string num)
  {

    string largestOddNumber = "";
    int l = num.length() - 1;
    int max = -l;

    if (num[l] % 2 != 0)
    {
      return num;
    }
    else
    {
      for (int i = l; i >= 0; i--)
      {
        if (num[i] % 2 != 0)
        {
          max = i;
          break;
        }
      }

      if (max >= 0)
      {
        largestOddNumber = num.substr(0, max + 1);
      }
      else
      {
        largestOddNumber = "";
      }
      return largestOddNumber;
    }
  }
};

#include <iostream>
#include <string>

int main()
{
  Solution solution;

  std::string num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  std::string result = solution.largestOddNumber(num);

  std::cout << "Result: " << result << std::endl;

  return 0;
}