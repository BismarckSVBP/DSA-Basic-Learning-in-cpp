#include<iostream>
using namespace std;

int main(){
    cout<< "Enter a number : ";
    int n;
    cin >> n;
     for (int i = 1; i <= 2*n-1; i++)
    {
      
        for (int j = 1; j <= n; j++)
        {
            cout << " ";
        }

      
        for (int j = 1; j <= i-n+1; j++)
        {
            
             cout << "* ";
        }
        cout << endl;
    }
}