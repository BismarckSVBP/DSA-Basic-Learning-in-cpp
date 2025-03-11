#include <iostream>
using namespace std;
bool removingAnElements(string str, int i, int j)
{
    while (i < j)
    {
        if (str[i] != str[j])
        {
            str.erase(j, 1);

            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
bool checkpalindrome(string str, int i, int j)
{
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
    // time complexity - O(n)
    string str = "aba";
    int length = str.length();
    int i = 0;
    int j = length - 1;
    if (removingAnElements(str, i, j) == 0)
    {
        if (checkpalindrome(str, i, j - 1) == 1)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    else
    {
        cout << "true" << endl;
    }

    cout << str << endl;

    return 0;
}
