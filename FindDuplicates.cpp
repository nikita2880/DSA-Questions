#include<iostream>
using namespace std;

int findDuplicate ( int arr[], int size)
{
    int ans=0;
    for ( int i=0; i<size ; i++)
    {
        ans=ans^arr[i];
    }

    for ( int i=1; i<size ; i++)
    {
        ans= ans^i;
    }

    return ans;
}

int main()
{
    int n;
    int arr[100];

    cout<<"Enter the size of array" ;
    cin >> n;

    cout<<"Enter the elements of array" << endl;
    for( int i=0 ; i<n ; i++ )
    {
        cin>>arr[i];
    }

    int ans;
    ans = findDuplicate ( arr, n);

    cout<<"The element that is repeating is : " << ans;
}