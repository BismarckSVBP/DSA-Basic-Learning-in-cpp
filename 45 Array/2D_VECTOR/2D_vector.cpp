#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // //method-1 for initialisation
    // vector<vector<int>> arr;
    // vector<int> a{1, 2, 3, 4, 5, 6, 7};
    // vector<int> b{8, 9, 10, 11, 12, 14};
    // vector<int> c{15, 18, 19, 20, 21};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {

    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // method-2 for initialisation
    int row = 3;
    int col = 5;
    vector<vector<int>> arr(row, vector<int>(col, 499));
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
