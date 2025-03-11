//we can use hashmap in place of array
//when we need to store the track then we ca use the queue
#include <iostream>
#include <queue>
using namespace std;
string solve(string str)
{
    vector<int> arr(26, 0);
    queue<char> q;
    string ans = "";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        arr[ch - 'a']++;
        q.push(ch);
        while (!q.empty())
        {
            if (arr[q.front() - 'a'] > 1)
            {
                q.pop();
            }
            else
            {
                ans.push_back(q.front());
                break;
            }
        }
        if (q.empty())
        {
            ans.push_back('#');
        }
    }
    return ans;
}

int main()
{
    string str = "zraczracy";
    string ans = solve(str);
    cout << ans << endl;
    return 0;
}
