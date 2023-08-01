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

int binarySearch ( int arr[], int s , int e , int key)
{
    int start= s;
    int end = e;
    int mid;
    mid = start + ((end-start) / 2);

    while( start <= end){
        if ( arr[mid] == key){
            return mid;
        }
        if ( arr[mid] < key){
            start = mid +1;
        }
        else {
            end = mid-1;

        }
       mid = start + ((end-start) / 2);
        
    }
    return -1;
}

int main()
{
    int n, key;
    int arr[100];

    cout << " Enter the size of array." << endl;
    cin >> n;
    cout <<"Enter the elements of array. " << endl;
    for ( int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    
    cout<<  " Enter element to find. "<< endl;
    cin >> key;

    int pivot;
    pivot = pivotElement ( arr, key);

    if ( key >= arr[pivot] && key <= arr[n-1])
    {
        cout << "Index is : " << binarySearch ( arr, pivot, n-1, key);
    }
    else{
        cout << "Index is : " << __x86_64 (arr, 0, n-1, key);
    }
}