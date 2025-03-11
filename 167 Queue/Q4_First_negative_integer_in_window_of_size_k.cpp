// #include <iostream>
// #include <queue>
// #include <vector>
// #include <limits.h>

// using namespace std;

// vector<int> solve(int arr[], int size, int k)
// {
//     vector<int> brr;
//     vector<int> candidates;

//     // Process first window of size = k
//     for (int i = 0; i < k; i++)
//     {
//         while (!candidates.empty() && arr[i] >= arr[candidates.back()])
//         {
//             candidates.pop_back();  // Remove the last element if it's smaller than the current element
//         }
//         candidates.push_back(i); // Store the index
//     }

//     // Push the maximum of the first window
//     brr.push_back(arr[candidates.front()]);

//     // Process the rest of the array
//     for (int i = k; i < size; i++)
//     {
//         // Remove the elements which are out of this window
//         if (!candidates.empty() && candidates.front() <= i - k)
//         {
//             candidates.erase(candidates.begin());
//         }

//         // Remove all elements smaller than the currently being added element (remove useless elements)
//         while (!candidates.empty() && arr[i] >= arr[candidates.back()])
//         {
//             candidates.pop_back();
//         }

//         // Add current element at the end of the candidates
//         candidates.push_back(i);

//         // Add the maximum of the current window
//         brr.push_back(arr[candidates.front()]);
//     }

//     return brr;
// }

// int main()
// {
//     int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
//     int size = 8;
//     int k = 3;
//     vector<int> brr = solve(arr, size, k);
//     for (auto val : brr)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }





#include <iostream>
#include <deque>
#include <vector>
#include <limits.h>

using namespace std;

vector<int> solve(int arr[], int size, int k)
{
    vector<int> brr;
    deque<int> q;

    // Process first window of size = k
    for (int i = 0; i < k; i++)
    {
        while (!q.empty() && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    // Process the rest of the array
    for (int i = k; i < size; i++)
    {
        // The element at the front of the deque is the largest element of the previous window
        brr.push_back(arr[q.front()]);

        // Remove the elements which are out of this window
        while (!q.empty() && q.front() <= i - k)
        {
            q.pop_front();
        }

        // Remove all elements smaller than the currently being added element (remove useless elements)
        while (!q.empty() && arr[i] >= arr[q.back()])
        {
            q.pop_back();
        }

        // Add current element at the rear of the deque
        q.push_back(i);
    }

    // Add the maximum element of the last window
    brr.push_back(arr[q.front()]);

    return brr;
}

int main()
{
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;
    vector<int> brr = solve(arr, size, k);
    for (auto val : brr)
    {
        cout << val << " ";
    }
    return 0;
}
