#include<iostream>
using namespace std;

void wavePrint( int arr[50][50], int n, int m)
{
    for ( int row=0; row<n; row++)
    {
        if (row&1)
        {
            for ( int col = m-1; col >= 0; col--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else{
            for (int col = 0 ; col < m ; col++)
            {
                cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n, m , arr[50][50];

    cout << "Enter number of rows." << endl;
    cin >> n;
    cout << "Enter number of columns." << endl;
    cin >> m;
    cout << "Enter elements in array." << endl;

    for ( int row=0; row<n; row++)
    {
        for ( int col=0; col<m; col++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
    }

    cout << "Printing array like a wave" << endl;
    wavePrint(arr, n , m);
}