#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for( int i=1 ; i<n ; i++)
    {
        int temp = arr[i];
        int j=i-1;
        for( j= i-1 ; j>=0 ; j--)
        {
            if (arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    cout<<"Sorted array is :" << endl;
    for( int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int n,arr[100];
    cout <<"Enter the size of array." << endl;
    cin >> n;

    cout<<"Enter the elements of array." << endl;
    for( int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr , n);
}