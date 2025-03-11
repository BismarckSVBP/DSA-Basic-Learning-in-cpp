
#include <iostream>
#include <string>
using namespace std;

// code-1
string decimalToBinary(int decimalNumber)
{
    if (decimalNumber == 0)
    {
        return "0";
    }

    string binaryNumber = "";
    while (decimalNumber > 0)
    {
        char str = (decimalNumber & 1 ? '1' : '0');
        binaryNumber = str + binaryNumber;
        decimalNumber >>= 1;
    }

    return binaryNumber;
}
// //code-2
// string decimalToBinary(int decimalNumber)
// {
//     if (decimalNumber == 0)
//     {
//         return "0";
//     }

//     string binaryNumber = "";
//     while (decimalNumber > 0)
//     {
//         int remainder = decimalNumber % 2;
//         binaryNumber =
//             to_string(remainder) + binaryNumber;
//         decimalNumber = decimalNumber / 2;
//     }

//     return binaryNumber;
// }

int main()
{
    int decimalNumber = 10;

    string binaryResult = decimalToBinary(decimalNumber);

    cout << "The binary representation of " << decimalNumber << " is " << binaryResult << endl;
    return 0;
}

// #include <iostream>
// #include <bitset>
// using namespace
// string decimalToBinary(int decimalNumber) {
//     return bitset<32>(decimalNumber).to_string().substr(bitset<32>(decimalNumber).to_string().find('1'));
// }

// int main() {
//     int decimalNumber = 11;
//     string binaryResult = decimalToBinary(decimalNumber);
//     cout << "The binary representation of " << decimalNumber << " is " << binaryResult << endl;
//     return 0;
// }
