
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // //for vector
    // vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    // if (binary_search(arr.begin(), arr.end(), 2))
    //     cout << "Element found in the array";

    // else
    //     cout << "Element not found in the array";

    // for array
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    //arr+1=104+1=104+4=108==>sahi hai
    if (binary_search(arr, arr + size, 8 ))
        cout << "Element found in the array";

    else
        cout << "Element not found in the array";

    return 0;
}
