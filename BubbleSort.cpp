#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for( int i=0; i<n-1 ; i++)
    {
        for(int j=0; j<n-i ; j++)
        {
            if ( arr[j] > arr[j+1])
            {
                 swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Sorted array is:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
        
    }
}

int main()
{
    int n,arr[100];
    cout<<"Enter the size of array" << endl;
    cin >> n;

    cout << "Enter the elements of array." << endl;
    for ( int i=0; i<n ; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
}