#include<iostream>
using namespace std;

void sort01( int arr[] , int n){
    int left=0 , right=n-1;

    while ( left < right ){
        if ( arr[left] == 0 && left<right ){
            left++;
        }
        if ( arr[right]5 == 1 && left < right){
            right--;
        }

        if (left < right){
            swap(arr[left], arr[right]);
            left++ ;
            right-- ;
        }
    }
}

void printArray( int arr[], int n){
    for (int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
}

int main()
{
    int n, i, j;
    int arr[100];

    cout << "Enter the size of array "<< endl;
    cin >> n;
    cout << "Enter the elements of array ."<< endl;
    for (int i=0; i<n ; i++ ){
        cin >>  arr[i];
    }
    
    sort01( arr , n);
    printArray ( arr, n);
}