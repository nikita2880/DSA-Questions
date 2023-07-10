// BITWISE OPERATIONS

/*

#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int b=6;

    cout<<" a&b = "<< (a&b) << endl;
    cout<<" a|b = "<< (a|b) << endl;
    cout<<" ~a = "<< (~a) << endl;
    cout<<" a^b = "<< (a^b) << endl;

    return 0;
}*/



// FIBONACCI SERIES

/*
#include<iostream>
using namespace std;

int main()
{
    int a,b,n ;
    cout<<" Enter the last value "<<endl;
    cin>>n;
    a=0;
    b=1;
    int sum=0;
    cout<< a << " " << b << " ";

    for(int i=1 ; i<=n ; i++ )
    {
        sum= a+b;
        cout<< sum << " " ;
        a = b;
        b = sum;

    }
}*/


// PRIME NUMBER 
/*
#include<iostream>
using namespace std;

int main()
{
    int n , i ;
    cout<< " Enter the number to check. " << endl ;
    cin >> n;
    int ans;

    for( i=2 ; i<=n ; i++)
    {
        if( n % i == 0)
        {
            ans = 0;
            break;
        }
        else    ans = 1;
        
    }

    if ( ans == 0)
    {
        cout<< " Not a prime number" << endl;
    }
    else 
    cout<< "Prime number" << endl;
}
*/

#include<iostream>
using namespace std;

int main()
{
    int ans=0;
    int n;
    cin>>n;
    int i=0;
    int bit;
    while(n!=0)
    {
        bit=n&1;
        ans=(bit*(10^1)+ans);
        n>>1;
        i++;
    }
    

    while(n){
        if(n&1){
            ans++;
        }
        n=n>>1;
    }
    cout<<ans;
}