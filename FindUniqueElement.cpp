#include<iostream>
using namespace std;

int findUnique( int arr[], int size ){

    int ans=0;

    for(int i=0 ; i<size ; i++)
    {
        ans = ans^arr[i];

    }
    return ans;
}

int main()
{
    int n;
    int arr[100];

    cout << "Enter the size of array" << endl;
    cin>>n;

    cout << "Enter the elements of array" << endl;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int unique;
    unique = findUnique ( arr , n);

    cout<< "The unique element is : " << unique <<endl;
}