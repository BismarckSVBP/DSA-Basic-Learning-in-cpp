#include <iostream>
using namespace std;
// int modulas(int x)
// {
//     int q = x / 10;
//     int mod = x - (q * 10);
//     return mod;
// }
// int countDigitOne(int n)
// {
//     unsigned long long count = 0;

//     for (int i = 1; i <= n; i++)
//     {

//         int j = i;
//         while (j != 0)
//         {
//             int mod = modulas(j);
//             if (mod == 1)
//             {

//                 count = count + 1;
//             }
//             j = j / 10;
//         }
//     }
//     return count;
// }

int countDigitOne(int n)
{
    long long count = 0;
    long long factor = 1;
    long long lower = 0, curr = 0, higher = 0;

    while (n / factor > 0)
    {
        lower = n - (n / factor) * factor;
        curr = (n / factor) % 10;
        higher = n / (factor * 10);

        if (curr == 0)
            count = count + (higher * factor);
        else if (curr == 1)
            count = count + (higher * factor + lower + 1);
        else
            count = count + ((higher + 1) * factor);

        factor = factor * 10;
    }

    return count;
}

int main()
{
    int a = 824883294;

    int result = countDigitOne(a);
    std::cout << "The modulus of " << result << std::endl;

    return 0;
}

// //leetcode solution
// class Solution
// {
// public:
//     int modulas(int x)
//     {
//         int q = x / 10;
//         int mod = x - (q * 10);
//         return mod;
//     }
//     int countDigitOne(int n)
//     {
//         unsigned long long count = 0;

//         for (int i = 1; i <= n; i++)
//         {

//             int j = i;
//             while (j != 0)
//             {
//                 int mod = modulas(j);
//                 if (mod == 1)
//                 {

//                     count = count + 1;
//                 }
//                 j = j / 10;
//             }
//         }
//         return count;
//     }
// };

class Solution
{
public:
    int countDigitOne(int n)
    {
        long long count = 0;
        long long factor = 1;
        long long lower = 0, curr = 0, higher = 0;

        while (n / factor > 0)
        {
            lower = n - (n / factor) * factor;
            curr = (n / factor) % 10;
            higher = n / (factor * 10);

            if (curr == 0)
                count = count + (higher * factor);
            else if (curr == 1)
                count = count + (higher * factor + lower + 1);
            else
                count = count + ((higher + 1) * factor);

            factor = factor * 10;
        }

        return count;
    }
};