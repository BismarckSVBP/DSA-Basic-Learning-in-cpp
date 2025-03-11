
// #include <iostream>
#include <vector>
// using namespace std;
// int findunique(int arr[])
// {
//     int ans = 0;
//     for (int i = 0; i < 15; i++)
//     {

//         ans = ans ^ arr[i];
//     }
//     return ans;
// }
// int main()
// {
//     int arr[15] = {1, 6, 2, 4, 2, 8, 3, 5, 7, 8, 5, 4, 6, 1, 7};
//     int n = 15;

//     int uniqueElement = findunique(arr);
//     cout << uniqueElement << endl;
//     return 0;
// }

// mathde-2

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number of element in array :";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Enter " << i + 1 << "th element : ";
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
    return 0;
}