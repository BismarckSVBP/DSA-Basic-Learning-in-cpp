
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(8);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    vector<int> arr(n, 10978);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}