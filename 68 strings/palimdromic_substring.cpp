#include <iostream>
using namespace std;

bool checkpalindrome(string str)
{
    int i = 0;
    int j = str.length() - 1;
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
    int noOfPalimdromicsubstring = 0;
    string str = "abacdfgdcaba";
    int length = str.length();

    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = 1; j <= length; j++)
        {
            if ((i + j) <= length)
            {
                if (checkpalindrome(str.substr(i, j)) == 1)
                {
                    cout << str.substr(i, j) << endl;
                    noOfPalimdromicsubstring++;
                }
            }
        }
    }
    cout << noOfPalimdromicsubstring;

    return 0;
}