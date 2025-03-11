// in case when we write exclude above the include

// #include <iostream>
// #include <string>
// using namespace std;
// void print(string arr, int size, int i, string output, int &count)
// {
//     //base case
//     if (i == size)
//     {
//         count++;
//         cout << output << endl;
//         return;
//     }
//     //exclude that element on which i is present
//     print(arr, size, i + 1, output,count);
//     //include that element on which i is present
//     output.push_back(arr[i]);//output = output +str[i];
//     print(arr, size, i + 1, output,count);

//     return;
// }

// int main()
// {
//     string arr = "abc";
//     string output = "";
//     int size = arr.length();
//     int i = 0;
//     int count = 0;
//     print(arr, size , i, output ,count);
//     cout << count << endl;

//     return 0;
// }

// in case when we write include above the exclude
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(string arr, int size, int i, string output, int &count, vector<string> &vec)
{
    // base case
    if (i == size)
    {
        count++;
        vec.push_back(output);
        cout << output << endl;
        return;
    }
    // include that element on which i is present
    output.push_back(arr[i]); // this line is responsible for concatination of output string ans ith character of arr string
    // exclude that element on which i is present

    print(arr, size, i + 1, output, count, vec);
    output.pop_back();

    print(arr, size, i + 1, output, count, vec);

    return;
}

int main()
{
    string arr = "abc";
    string output = "";
    int size = arr.length();
    int i = 0;
    int count = 0;
    vector<string> vec;
    print(arr, size, i, output, count, vec);
    for(auto value : vec){
    cout << value << endl;        
    }
    cout << count << endl;

    return 0;
}
