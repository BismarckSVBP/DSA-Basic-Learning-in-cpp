
// by me

#include <iostream>
#include <vector>
#include <algorithm> //for reversing of output string
using namespace std;

void generateLetterCombination(int input, string output, vector<string> &arr, int &count, vector<string> &mapping)
{
    if (input == 0)
    {
        reverse(output.begin(), output.end());
        arr.push_back(output);
        count++;
        return;
    }
    int a = input;
    int b = a % 10;
    int c = b - 2;
    a = a / 10;

    for (int i = 0; i < mapping[c].size(); i++)
    {
        output.push_back(mapping[c][i]);

        generateLetterCombination(a, output, arr, count, mapping);

        output.pop_back();
    }
}
int main()
{
    int input = 239;

    vector<string> mapping{"abc", "def", "ghi", "jkl", "mno", "pqrs", "stu", "wxyz"};
    string output = "";
    vector<string> arr;

    int count = 0;
    generateLetterCombination(input, output, arr, count, mapping);

    for (auto str : arr)
    {
        cout << str << endl;
    }
    cout << count << endl;
    return 0;
}

// by master

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm> //for reversing of output string
// using namespace std;

// void generateLetterCombination(string input, string output, vector<string> &arr, int index, vector<string> &mapping)
// {
//     if (index >= input.length())
//     {

//         arr.push_back(output);

//         return;
//     }
//     int a = input[index] - '0';

//     int b = a % 10;
//     int c = b - 2;

//     for (int i = 0; i < mapping[c].size(); i++)
//     {
//         output.push_back(mapping[c][i]);

//         generateLetterCombination(input, output, arr, index + 1, mapping);

//         output.pop_back();
//     }
// }
// int main()
// {
//     string input = "423";

//     vector<string>
//         mapping{"abc", "def", "ghi", "jkl", "mno", "pqrs", "stu", "wxyz"};
//     string output = "";
//     vector<string> arr;

//     int index = 0;

//     generateLetterCombination(input, output, arr, index, mapping);

//     for (auto str : arr)
//     {
//         cout << str << endl;
//     }

//     return 0;
// }
