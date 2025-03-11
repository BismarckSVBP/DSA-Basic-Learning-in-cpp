#include <iostream>
using namespace std;

int main()
{
    // time complexity - O(n^2)
    string str = "abbaca";
    int length = str.length();
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (str[i] == str[i + 1])
            {
                str.erase(i, 2);
                i = i - 1;
            }
        }
    }
    cout << str << endl;

    // time complexity - O(n)
    string str2 = "azxxzy";
    int length2 = str2.length();
    for (int i = 0; i < length2; i++)
    {

        if (str2[i] == str2[i + 1])
        {
            str2.erase(i, 2);
            i = i - 2;
        }
    }
    cout << str2;

    return 0;
}
