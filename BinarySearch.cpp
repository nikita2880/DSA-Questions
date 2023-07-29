#include<iostream>
using namespace std;

int binarySearch ( int arr[], int n, int key)
{
    int start= 0;
    int end = n-1;
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
    int index;
    index = binarySearch( arr, n, key);

    cout << "Index of " << key << " is :" << index;

}