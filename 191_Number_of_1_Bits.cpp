#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    uint32_t n = 00000000000000000000000000001011;

    // the code is from here to...

    bitset<32> binaryRepresentation(n);
    string num = binaryRepresentation.to_string();
    int j{0};
    while (num != "")
    {
        for (int i{0}; i <= (num.length() - 1); i++)
        {
            if (num[i] == '1')
            {
                j++;
            }
        }
        // this cout is too show you what the code returns,   Don't include it in your code!
        cout << j << endl;

        break;
    }

    // here.

    return 0;
}