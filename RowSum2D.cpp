#include<iostream>
using namespace std;

void printSum( int arr[][200], int n, int m)
{
    

    cout << "Printing sum" << endl;
    for ( int row=0; row < n ; row++)
    {
        int sum=0;
        for ( int col=0 ; col < m ; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int main()
{
    int n, m ;
    int arr[100][200];

    cout << "Enter the size of rows and columns. " << endl;
    cin >> n;
    cin >> m;

    cout << "Enter elements." << endl;
    for ( int row=0; row < n ; row++)
    {
        for ( int col=0 ; col < m ; col++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
    }

    printSum( arr, n , m);
}

// for col wise sum jst use the col loop first then row loop and rest same.