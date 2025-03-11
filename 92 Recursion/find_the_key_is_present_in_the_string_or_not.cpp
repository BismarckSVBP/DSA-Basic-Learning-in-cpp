// // by using reference operator
// #include <iostream>

// using namespace std;
// bool &findingKeyISpresentOrNot(char arr[], int n, char target, bool &check)
// {
//     if (n == 0)
//     {
//         if (arr[0] == target)
//         {
//             check = 1;

//             cout << target << " is present at index : " << n << endl;
//         }

//         return check;
//     }

//     findingKeyISpresentOrNot(arr, n - 1, target, check);
//     if (arr[n] == target)
//     {
//         check = 1;
//         cout << target << " is present at index : " << n << endl;
//     }
//     return check;
// }

// int main()
// {
//     char arr[6] = "Hello";
//     char target = 'l';
//     bool check = 0;
//     bool check2 = findingKeyISpresentOrNot(arr, 6, target, check);
//     if (check2 == 1)
//     {
//         cout << "Yes key is present in the string." << endl;
//     }
//     else
//     {
//         cout << "No key is not present in the string." << endl;
//     }
// }

/// by  master

// #include <iostream>

// using namespace std;
// bool findingKeyISpresentOrNot(char arr[], int n, char target, int i)
// {
//     if (i >= n)
//     {

//         return false;
//     }
//     if (arr[i] == target)
//     {

//         cout << target << " is present at index : " << i << endl;
//         return true;
//     }
//     return findingKeyISpresentOrNot(arr, n, target, i + 1);
// }

// int main()
// {
//     char arr[6] = "Hello";
//     char target = 'l';
//     int i = 0;
//     bool check2 = findingKeyISpresentOrNot(arr, 6, target, i);
//     if (check2 == 1)
//     {
//         cout << "Yes key is present in the string." << endl;
//     }
//     else
//     {
//         cout << "No key is not present in the string." << endl;
//     }
// }

// by master-2

#include <iostream>
#include <vector>
using namespace std;
void findingKeyISpresentOrNot(char arr[], int n, char target, int i, vector<int> &brr, int &count)
{
    if (i >= n)
    {

        return;
    }
    if (arr[i] == target)
    {

        cout << target << " is present at index : " << i << endl;
        // storing the indexes of the key in a new array
        brr.push_back(i);
        count++;
    }
    return findingKeyISpresentOrNot(arr, n, target, i + 1, brr, count);
}

int main()
{
    char arr[6] = "Hello";
    char target = 'l';
    int i = 0;
    vector<int> brr;
    int count = 0;
    findingKeyISpresentOrNot(arr, 6, target, i, brr, count);
    int p = brr.size();
    for (int k = 0; k < p; k++)
    {
        cout << brr[k] << " ";
    }
    cout << endl;
    for (auto val : brr)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << count << endl;

    return 0;
}

// note-> jab bhi hume kuch store karna hota hai jisme store karna hota hai use pass by reference karte hai
