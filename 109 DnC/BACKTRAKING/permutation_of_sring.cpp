

// //by totally recursion  // by Backtracking solution given below

// #include <iostream>
// #include <string.h>
// using namespace std;
////string is pass by value
// void printingPermutation(string str, int i)
// {
//     if (i >= (str.length()))
//     {
//         cout << str << endl;
//         return;
//     }

//     for (int j = i; j < str.length(); j++)
//     {
//         swap(str[i], str[j]);
//         printingPermutation(str, i + 1);
//     }

//     return;
// }
// int main()
// {
//     string str = "abcd";
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     printingPermutation(str, i);

//     return 0;
// }

// by Backtracking

#include <iostream>
#include <string.h>
using namespace std;
// string is pass by reference
void printingPermutation(string &str, int i)
{
    if (i >= (str.length()))
    {
        cout << str << endl;
        return;
    }

    for (int j = i; j < str.length(); j++)
    {
        // swaping
        swap(str[i], str[j]);
        // recursive calls
        printingPermutation(str, i + 1);
        // Backtracking -> To recreate original input
        swap(str[i], str[j]);
    }

    return;
}
int main()
{
    string str = "abc";
    int i = 0;
    int j = 0;
    int k = 0;
    printingPermutation(str, i);

    return 0;
}