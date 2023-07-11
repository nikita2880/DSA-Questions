#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
     cout << "Enter the size of array."<< endl;
     cin >> n;

     cout << "Enter the elements of array ."<< endl;
     for( int i=0; i<n ; i++)
     {
        cin>> arr[i];
     }
    for(int i=0; i<n; i++)
    {
        for( int j=i+1; j<n; j++)
        {
            if (arr[i]==arr[j] ){
            cout<< arr[i]<< " ";
            break;
            }
        }
    }
    
}