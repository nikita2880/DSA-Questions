#include<iostream>
using namespace std;

long long int binarySearch( int n)
{
    int s=0;
    int e=n;
    long long int ans=-1;
    long long mid = s + ((e-s)/2);
    while (s<=e)
    {
        long long int square;
        square =  mid * mid;
        if ( square == n )
        {
            return mid;
        }
        
        if (square < n)
        {
            ans = mid;
            s= mid +1;
        }

        else 
        {
            e= mid-1;
        }
        mid = s + ((e-s)/2);
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number to find square root." << endl;
    cin >> n;

    int answer;
    answer = binarySearch( n);
    cout << "Square root is : "<< answer << endl;
}