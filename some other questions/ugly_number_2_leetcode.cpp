// not so much optimised as leetcode wants

#include <iostream>

int nthUglyNumber(int n)
{

    if (n == 1)
    {
        return 1;
    }
    else
    {
        int count = 1;
        int x = 2;
        int y = x;
        while (count < n)
        {
            int z = x;
            while (z != 1)
            {
                if (z % 2 == 0)
                {
                    z = z / 2;
                }
                else if (z % 3 == 0)
                {
                    z = z / 3;
                }
                else if (z % 5 == 0)
                {
                    z = z / 5;
                }
                else
                {
                    break;
                }
            }
            if (z == 1)
            {
                count++;
                y = x;
            }
            x = x + 1;
        }

        return y;
    }
}
int main()
{
    int x = nthUglyNumber(1407);
    std::cout << x;

    return 0;
}


// so much optimised as leetcode wants


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int nthUglyNumber(int n)
// {
//     vector<int> arr(n);
//     arr[0] = 1;

//     int i2 = 0, i3 = 0, i5 = 0;
//     int nextMulOf2 = 2;
//     int nextMulOf3 = 3;
//     int nextMulOf5 = 5;

//     for (int i = 1; i < n; i++)
//     {
//         int nextUgly = min(nextMulOf2, min(nextMulOf3, nextMulOf5));
//         arr[i] = nextUgly;

//         if (nextUgly == nextMulOf2)
//         {
//             i2++;
            
//             nextMulOf2 = arr[i2] * 2;
//         }
//         if (nextUgly == nextMulOf3)
//         {
//             i3++;
            
//             nextMulOf3 = arr[i3] * 3;
//         }
//         if (nextUgly == nextMulOf5)
//         {
//             i5++;
           
//             nextMulOf5 = arr[i5] * 5;
//         }
//     }

//     return arr[n - 1]; // The nth ugly number
// }

// int main()
// {
//     int x = nthUglyNumber(1407);
//     std::cout << x;

//     return 0;
// }
