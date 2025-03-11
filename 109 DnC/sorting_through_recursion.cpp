// method-1 //by choosing pivot element // O(n^2) time complexities

// #include <iostream>
// #include <vector>
// using namespace std;

// void quickSort(vector<int> &arr, int i)
// {
//     if (i >= arr.size())
//     {
//         return;
//     }

//     int count = 0;
//     for (int j = i + 1; j < arr.size(); j++)
//     {

//         if (arr[i] > arr[j])
//         {
//             count++;
//         }
//     }
//     swap(arr[i], arr[i + count]);
//     if (count > 0)
//     {
//         i = i - 1;
//     }

//     quickSort(arr, i + 1);
//     return;
// }
// int main()
// {
//     vector<int> arr{1, 20, 6, 4, 5}; // 2, 4, 1, 3, 5//8, 4, 2, 1//1, 20, 6, 4, 5//
//     int i = 0;
//     quickSort(arr, i);

//     for (int value : arr)
//     {
//         cout << value << endl;
//     }
//     return 0;
// }

// method-2 //by choosing minimum element  // O(n^2) time complexities
//  #include <iostream>
//  #include <vector>
//  using namespace std;

// void quickSort(vector<int> &arr, int i)
// {
//     if (i >= arr.size())
//     {
//         return;
//     }

//     for (int j = i + 1; j < arr.size(); j++)
//     {

//         if (arr[i] > arr[j])
//         {
//             swap(arr[i], arr[j]);
//         }
//     }
//     quickSort(arr, i + 1);
//     return;
// }
// int main()
// {
//     vector<int> arr{1, 20, 6, 4, 5}; // 2, 4, 1, 3, 5//8, 4, 2, 1//1, 20, 6, 4, 5//
//     int i = 0;
//     quickSort(arr, i);

//     for (int value : arr)
//     {
//         cout << value << endl;
//     }
//     return 0;
// }
