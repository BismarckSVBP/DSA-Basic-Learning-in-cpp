
#include <iostream>

using namespace std;
void printingTheDigitWithPosition(int digit, int size)
{
    if (size == 1)
    {
        cout << "The " << digit << " is at position number : " << size << endl;

        return;
    }

    int ans = digit % 10;

    printingTheDigitWithPosition(digit / 10, size - 1);
    cout << "The " << ans << " is at position number : " << size << endl;
    return;
}

int main()
{
    int digit = 6947;//0647 is octal  value which integer value is 423
    int size = 4;
  cout << "The " << digit << " is at position number : " << size << endl;
    printingTheDigitWithPosition(digit, size);
}
