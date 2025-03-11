#include<iostream>
using namespace std;
int getlength(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

bool palindrome(char arr[], int i, int j)
{
   while(i<j){
    if(arr[i]!=arr[j]){
        return 0;
    }
    i++;
    j--;
   }
   return 1;

}

int main()
{
    char arr[] = "NotoN";
    cout << arr << endl;
    int length = getlength(arr);
    int i = 0;
    int j = length - 1;
    bool check = palindrome(arr, i, j);
   if(check==1){
    cout << "Array is palindrome";

   }
   else{
    cout << "Array is not palindrome";
   }
    return 0;
}
