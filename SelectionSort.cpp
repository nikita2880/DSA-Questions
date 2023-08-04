#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for ( int i=0; i< n-1 ; i++)
    {
        int minIndex = i;
        for ( int j=i+1; j<n; j++)
        {
            if ( arr[j] < arr[minIndex] )
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for ( int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, arr[100];

    cout << "Enter the size of array." << endl;
    cin >> n;

    cout << "Enter the unsorted array." << endl;

    for ( int i=0; i<n ; i++)
    {
        cin  >> arr[i];
    }

    selectionSort( arr, n);
}