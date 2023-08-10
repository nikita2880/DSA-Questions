#include<iostream>
using namespace std;

int largestSum( int arr[][200], int n, int m)
{
    int maxi= INT_MIN;
    int rowIndex;

    cout << "Printing sum" << endl;
    for ( int row=0; row < n ; row++)
    {
        int sum=0;
        for ( int col=0 ; col < m ; col++)
        {
            sum += arr[row][col];
        }
        if ( sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "Maximum row sum is : " << maxi << endl;
    return rowIndex;
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

    int ans = largestSum( arr, n , m);

    cout << "Index of largest row is : " << ans;
}

