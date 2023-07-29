#include<iostream>
using namespace std;

int intersection( int first[], int second[], int m, int n){
    int i,j;
    int ans;
    for ( i=0; i<m; i++)
    {
        int element = first[i];
        for ( j=0; j<n; j++)
        {
            if ( element == second[j]){
                cout<< element<<" ";
                element = -4;
                break;
            }
            else{ cout << "-1";
            break;}
        }
       
    }
     return -1;

}

int main()
{
    int m, n ;
    int first[100], second[100] ;
    cout<<"Enter the size of first array." << endl;
    cin >> m ;
    cout << "Enter the size of seconf array. " << endl;
    cin >> n ;

    cout << "Enter the elements of first array." << endl;
    for (int i=0 ; i<m ; i++)
    {
        cin >> first[i];
    }

    cout<< "Enter the elements of second array. " << endl;
    for( int i=0; i<n ; i++)
    {
        cin >> second[i];
    }

    int ans = intersection( first, second, m, n);
    

}