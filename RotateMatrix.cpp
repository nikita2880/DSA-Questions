#include<iostream>
using namespace std;

int main()
{
    int n, a[50][50];
    cout << "Enter the value of n. "<< endl;
    cin >> n;

    cout << "Enter the elements of array." << endl;
    for (int row=0; row<n; row++)
    {
        for (int col = 0; col<n; col++)
        {
            cin >> a[row][col];
        }
    }

    for(int col=0; col<n; col++)
    {
        for ( int row=n-1; row>=0; row++)
        {
            cout << a[row][col];
        }
    }
}