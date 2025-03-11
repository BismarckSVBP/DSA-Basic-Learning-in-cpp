#include <iostream>
using namespace std;

int main()
{
    // time complexity - O(n)
    string str = "axxxxyyyyb";
    string target = "xy";
    int length = str.length();
    int targetlength = target.length();
    for (int i = 0; i < length; i++)
    {

        int idx = str.find(target);
        if (idx != string::npos)
        {
            str.erase(idx, targetlength);
            
        }
    }
    cout << str << endl;

    return 0;
}
