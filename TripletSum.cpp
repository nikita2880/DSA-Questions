#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n,ans,s;
    int arr[100];

    cout << "Enter the size of array. "<< endl;
    cin >> n;

    cout << "Enter the elements of array ." << endl;
    for( int i=0; i<n; i++){
        cin>> arr[i];

    }
    cout<< "Enter the value of s" << endl;
    cin >> s;

    for (int i=0 ; i<n ; i++){
        for ( int j=i+1 ; i<n-1 ; i++){
            for(int k=j+1 ; j<n-2 ; j++){
                if (arr[i] + arr[j] + arr[k] == s){
                    cout << arr[i] <<" "<< arr[j] <<" "<< arr[k];
                }
            }
        }
    }
}