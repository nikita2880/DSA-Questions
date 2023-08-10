#include<iostream>
using namespace std;

int firstOcc( int arr[], int n, int key)
{
   int start= 0;
    int end = n-1;
    int mid;
    mid = start + ((end-start) / 2);
    int ans=-1;

    while( start <= end){
        if ( arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if ( arr[mid] < key){
            start = mid +1;
        }
        else {
            end = mid-1;

        }
       mid = start + ((end-start) / 2);
        
    }
    return ans;
}

int lastOcc( int arr[], int n, int key)
{
    int start= 0;
    int end = n-1;
    int mid;
    mid = start + ((end-start) / 2);
    int ans=-1;

    while( start <= end){
        if ( arr[mid] == key){
            ans = mid;
            start = mid +1 ;
        }
        else if ( arr[mid] < key){
            start = mid +1;
        }
        else {
            end = mid-1;

        }
       mid = start + ((end-start) / 2);
        
    }
    return ans;
}

int totalOcc( int arr[], int n, int key)
{
    int first, last;
    first = firstOcc( arr, n , key);
    last = lastOcc( arr, n , key);

    int total;
    total = (last-first)+1;
    return total;
    
}
int main()
{
    int n, k, arr[100],key;
    cout << "Enter the size of array." << endl;
    cin >> n;

    cout << "Enter the elements of array. "<< endl;
    for ( int i=0 ; i<n ; i++ ){
        cin >> arr[i];
    }
     cout << "Enter key. "<< endl;
     cin >> key;

     int first,last, total;
     first = firstOcc( arr, n , key);
     last = lastOcc( arr, n , key);
     total = totalOcc( arr, n , key);

     cout << "The index of first occurence is : " << first << endl;
     cout << "The index of last occurence is : " << last << endl;
     cout << "The total no. of occurence is : " << total << endl;
}