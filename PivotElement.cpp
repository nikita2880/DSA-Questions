#include<iostream>
using namespace std;

int pivotElement( int arr[], int n)
{
    int s=0;
    int e=n-1;
    int mid;
    mid = s + ((e-s)/2);

    while ( s < e )
    {
        if ( arr[mid] >= arr[0] )
        {
            s = mid + 1;
        }
        else 
        {
            e = mid;
        }

        mid = s + ((e-s)/2);
    }
    return s;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter the size of array." <<endl;
    cin>> n;

    cout << "Enter elements of array." <<endl;
    for ( int i=0; i<n; i++)
    {
        cin>> arr[i];

    }

    int pivot;
    pivot = pivotElement( arr ,n);

    cout << "Index of pivot element is : "<< pivot << endl;

}