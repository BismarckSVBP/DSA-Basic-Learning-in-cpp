// #include <iostream>
// #include <vector>
// using namespace std;

// void generateParenthesis(string output, int a, int b, vector<string> &arr,int &count)
// {
//     if (a == 0 && b == 0)
//     {
//         arr.push_back(output);
//         count++;
//         return;
//     }
//     if (a > 0)
//     {
//         generateParenthesis(output + '(', a - 1, b, arr,count);
//     }
//     if (a < b)
//     {
//         generateParenthesis(output + ')', a, b - 1, arr,count);
//     }

// }
// int main()
// {
//     vector<string> arr;
//     int noOfpairs = 2;
//     int a = noOfpairs;
//     int b = noOfpairs;
//     string output = "";
//     int count =0;
//     generateParenthesis(output, a, b, arr,count);

//     for (auto str : arr)
//     {
//         cout << str << endl;
//     }
//     cout << count << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void generateParenthesis(string output, int a, int b, vector<string> &arr, int &count)
{
    if (a == 0 && b == 0)
    {
        arr.push_back(output);
        count++;
        return;
    }
    if (a > 0)
    {
        output.push_back('(');
        generateParenthesis(output, a - 1, b, arr, count);
        output.pop_back();
    }
    if (a < b)
    {
        output.push_back(')');
        generateParenthesis(output, a, b - 1, arr, count);
        output.pop_back();
    }
}
int main()
{
    vector<string> arr;
    int noOfpairs = 2;
    int a = noOfpairs;
    int b = noOfpairs;
    string output = "";
    int count = 0;
    generateParenthesis(output, a, b, arr, count);

    for (auto str : arr)
    {
        cout << str << endl;
    }
    cout << count << endl;
    return 0;
}