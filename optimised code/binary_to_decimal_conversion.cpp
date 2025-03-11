// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int binaryToDecimal(string &binary)
// {
//     int decimal = 0;
//     int length = binary.length();

//     // Iterate over each bit in the binary string
//     for (int i = 0; i < length; i++)
//     {
//         // Calculate the value of the bit (0 or 1)
//         int bitValue = binary[length - 1 - i] - '0';
//         // Add the bit's contribution to the decimal number
//         decimal = decimal + bitValue * pow(2, i);
//     }

//     return decimal;
// }

// int main()
// {
//     string binaryNumber;
//     cout << "Enter a binary number: ";
//     cin >> binaryNumber;

//     int decimalNumber = binaryToDecimal(binaryNumber);

//     cout << "The decimal equivalent is: " << decimalNumber << endl;

//     return 0;
// }
