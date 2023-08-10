#include<iostream>
using namespace std;

bool search( int arr[][200] , int findno, int n, int m)
{
    for ( int row=0; row < n ; row++)
    {
        for ( int col=0 ; col < m ; col++)
        {
            if (arr[row][col] == findno)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n, m, findno;
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
    }

    cout << "Enter element to find. "<< endl;
    cin >> findno;

    if (search(arr, findno, n, m))
    {
        cout << "Element found!" << endl;
    }
    else{
        cout << "Not found. " << endl;
    }
}