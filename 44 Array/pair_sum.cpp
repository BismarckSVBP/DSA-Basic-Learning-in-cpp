#include <iostream>
#include <vector>
#include<limits>
using namespace std;

int main()
{
    vector<int> arr{4, 2, 3, 1, 4, 5, 0};

    int sum = 5;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
               
                cout << arr[i] << "&" << arr[j] << "  ";
                
            }
        }
    }

    return 0;
}