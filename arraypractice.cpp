// Find maximum and minimum in an array.

/*
#include<iostream>
using namespace std;

int main(){
    int n, arr[100];

    cout<<"Enter the size of array"<< endl;
    cin>> n;
    cout << "Enter the elements of array."<< endl;
    for (int i=0; i<n;i++){
        cin >> arr[i];
    }

    int mini=INT_MAX;

    for (int i=0; i<n;i++){
        if (arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    cout << "Minimum is : "<<mini<< endl;

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        maxi=max(maxi, arr[i]);
    }

    cout << "Maximum is  : "<< maxi;

    return 0;
}

*/

// Sum of array

/*
#include<iostream>
using namespace std;

int arraysum(int arr[], int size)
{
    int sum=0;
    for( int i=0; i<size; i++ ){
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n, arr[100];

    cout << "Enter the size of array." << endl;
    cin>>n;

    cout << "Enter the elements of array."<< endl;

    for (int i=0; i<n ; i++){
        cin >> arr[i];
    }
    int s = arraysum(arr, n);

    cout << "Sum of array is : "<< s << endl;

    return 0;


}
*/

// Linear Search


/*
#include<iostream>
using namespace std;

int main()
{
    int n, arr[100],l;

    cout << "Enter the size of array."<< endl;
    cin >>n;

    cout << "Enter the elements of array." << endl;
    for ( int i=0; i<n ; i++){
        cin >> arr[i];
    }

    cout<< "Enter element to be searched." << endl;
    cin >> l;
    bool ans;

    for( int i=0; i<n; i++){
        if (arr[i]==l)
        {
            ans = 1;
            break;
        }
        else{
            ans=0;
        }
        
    }
    if (ans==1){
            cout<< "Found."<< endl;
        }
    else{
        cout << "Not found."<< endl;
        }
}
*/

// Reverse an array

/*
#include<iostream>
using namespace std;

int main()
{
    int n, arr[100];

    cout<< "Enter the size of array."<< endl;
    cin>> n;

    cout << "Enter the elements of array.";
    for( int i=0 ; i<n; i++){
        cin >> arr[i];
    }

    int start =0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Swapped array is : "<< endl;
    for( int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}
*/

// Swap alternate elements in array.


/*
#include<iostream>
using namespace std;

void swapalternate( int arr[], int n)
{
    for ( int i=0; i<n; i=i+2){
        if( i+1 < n){
        swap(arr[i], arr[i+1]);
        }
    }
}

void printing( int arr[], int n){
    cout << "Printing array."<< endl;
    for (int i=0; i<n; i++){
        cout << arr[i]<< endl;
    }
}

int main()
{
    int n, arr[100];

    cout << "Enter the size of array." << endl;
    cin >> n;

    cout << "Enter the elements of array." << endl;
    for (int i=0; i<n ; i++){
        cin >>  arr[i];
    }

    swapalternate( arr, n);

    printing( arr, n);
}*/

// Find unique

#include<iostream>
using namespace std;

int main()
{
    int n, arr[100];
    cout << "Enter the size of array." << endl;
    cin >> n;

    cout << "Enter the elements of array." << endl;
    for (int i=0; i<n ; i++){
        cin >>  arr[i];
    }
     int ans=0;

    for( int i=0; i< n;i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Unique element is : "<< ans << endl;

    return 0;

}