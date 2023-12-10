

// Solution of the 2264 problem " Largest 3-Same-Digit Number in String"

#include <iostream>

#include <cstring>

using namespace std;

int main()
{

  string largestGoodInteger;
  string num{"676466665489"};

  // the code is from here to  ....

  char max = -1;
  int maxIndex = 0;

  for (int i = 0; i < num.length(); i++)
  {
    while (num[i] > max)
    {
      char j = num[i + 1];
      if (num[i] == j)
      {
        char k = num[i + 2];
        if (num[i] == k)
        {
          max = num[i];
          maxIndex = i;
          break;
        }
      }
      break;
    }
  }
  if (max == -1)
  {
    cout << "none" << endl;
  }
  else
  {
    cout << num.substr(maxIndex, 3) << endl;
  }

  // here.

  return 0;
}