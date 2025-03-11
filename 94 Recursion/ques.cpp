
#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> coins, int size, int i, int output, int &count, vector<int> &vec, string count2, vector<string> &values)
{
    // base case
    if (i == size)
    {
        count++;
        values.push_back(count2);
        vec.push_back(output);
        // cout << output << endl;
        return;
    }

    print(coins, size, i + 1, output, count, vec, count2, values);

    count2 = count2 + to_string(coins[i]);
    output = output + coins[i];

    print(coins, size, i + 1, output, count, vec, count2, values);
    return;
}

int main()
{
    vector<int> coins{1,3,5};
    int amount = 12;
    int output = 0;
    vector<int> vec;
    string count2 = "";
    vector<string> values;
    int size = coins.size();
    int i = 0;
    int count = 0;
    vector<int> noOFvalues2;

    //for subsequential addition & getting the values which is contains by subsequential addition
    print(coins, size, i, output, count, vec, count2, values);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "  " << values[i] << endl;
        if (vec[i] == amount)
        {
            noOFvalues2.push_back(values[i].size());
        }
    }

    int min = noOFvalues2[0];
    for (int i = 1; i < noOFvalues2.size(); i++)
    {
        if (min >= noOFvalues2[i])
        {
            min = noOFvalues2[i];
        }
    }
    cout << "result : " << min << endl;
//   return min;

    return 0;
}