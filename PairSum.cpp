#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int s, n;
    vector<int> ans;
    int arr[100];
    cout<< "Enter the size of array" << endl;
    cin>> n;
    cout << "Enter the elements of array." << endl;
    for( int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value of s." << endl;
    cin >> s;

    for (int i=0 ; i<n ; i++){
        for (int j=i+1 ; j<n-1 ; j++){
            if (arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i] , arr[j]));
                temp.push_back(max(arr[i] , arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans;
}