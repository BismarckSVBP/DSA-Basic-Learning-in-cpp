

// #include <iostream>
// #include <stack>
// #include <queue>
// #include <vector>

// using namespace std;
// int findfirst(queue<int> q, int k)
// {

//     int i = 0;
//     while (i != k)
//     {
//         int element = q.front();
//         if (element < 0)
//         {
//             return element;
//         }
//         q.pop();
//         i++;
//     }
//     return 0;
// }

// int main()
// {
//     queue<int> q;
//     q.push(12);
//     q.push(-1);
//     q.push(-7);
//     q.push(8);
//     q.push(-15);
//     q.push(30);
//     q.push(16);
//     q.push(28);
//     int k = 3;
//     vector<int> arr;
//     while (!q.empty())
//     {

//         if (q.size() >= k)
//         {
//             int first = findfirst(q, k);
//             arr.push_back(first);
//         }

//         q.pop();
//     }

//     for (auto val : arr)
//     {
//         cout << val << " ";
//     }
//     return 0;
// }


////sliding window concept
#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;
vector<int> solve(int arr[], int size, int k)
{
    vector<int> brr;
    queue<int> q;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    for (int i = k; i < size; i++)
    {
        if (q.empty())
        {
            brr.push_back(0);
        }
        else
        {
            int temp = arr[q.front()];
            brr.push_back(temp);
        }

        if((!q.empty()) && (i - q.front() == k))
        {
            q.pop();
        }
        if (arr[i] < 0)
        {
            q.push(i);
        }
    }
    if (q.empty())
    {
        brr.push_back(0);
    }
    else
    {
        int temp = arr[q.front()];
        brr.push_back(temp);
    }
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