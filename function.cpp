//EVEN ODD FUNCTION PROGRAM
/*
#include<iostream>

using namespace std;

bool isEven(int a){
    if (a&1)
    {
        return 0;  //num is odd
    }

    return 1;  ///num is even
}

int main(){
    int num;
    cout<<"Enter the number to check."<<endl;
    cin>>num;
    if (isEven(num)){
        cout<<"THe number is even";
    }
    else
    cout<<"The number is odd";
    
}
*/

// nCr FUNTION PROGRAM

/*
#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1 ; i<=n ; i++){
        fact = fact * i ;
        
    }
    return fact;
}

int nCr(int n, int r)
{
    int nume = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    int ans = nume / denom ;
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int answer;
    answer = nCr (n ,r );
    cout<<" The answer is = "<<answer <<endl;
} */

// COUNTING PRINT PROGRAM


/*
#include<iostream>
using namespace std;

int printCounting(int first, int last)
{
    for(int i=first ; i<= last ; i++)
    {
        cout<< i <<" ";
    }
return 0;
}

int main(){
    int first, last;
    cout<<"Enter the first digit"<<endl;
    cin>>first;
    cout<<"Enter the last digit"<<endl;
    cin>>last;
    cout<<"The answer is : "<< printCounting(first, last)<<endl;
    return 0;

}*/

//  PRIME NUMBER PROGRAM
/*
#include<iostream>
using namespace std;

int isPrime(int num)
{
    for( int i=2 ; i<num ; i++)
    {
        if(num % i == 0)
        {
            return 0;  //Not prime
        }
        
    }
    return 1;

}

int main()
{
    int n;
    cout<<"Enter number to check prime"<<endl;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"It is a prime number";
    }
    else
    cout<<"It is not a prime number";
    return 0;
}
*/

// HOME WORK QUESTIONS

// QUESTION 1  "A.P = 3*n + 7"


/*
#include<iostream>
using namespace std;

int AP(int n)
{
    int ans;
    ans = 3 * n + 7;
    return ans;
}

int main()
{
    int n, answer ;
    cout << "Enter the value of n" << endl;
    cin >> n;
    answer = AP(n);
    cout << " The "<< n <<"th term is : "<< answer << endl;
    return 0;
}*/


// QUESTION 2 TOTAL NO> OF SET BITS IN A & B


/*
#include<iostream>
using namespace std;

int SetBits(int n)
{
    int count = 0;
    while(n){
        if (n & 1 > 0){
        ++count;
        }
        n >>= 1;        
    }
    return count;

}

int main()
{
    int a , b , ans ;
    cout << "Enter the value of a and b respectively."<<endl;
    cin>>a;
    cin>>b;
    ans = SetBits(a) + SetBits(b);
    cout <<"The answer is : "<<ans;
    return 0;
}*/


// QUESTION 3 FIBONACCI SERIES




#include<iostream>
using namespace std;

int Fibo(int n)
{
    int a,b;
    a=0; b=1;
    int sum = 0;
    for ( int i = 0; i< n-2; i++)
    {
        sum = a+b;
        a = b;
        b = sum;
    }
return sum;

}

int main()
{

    int n, answer;
    
    cout<<"Enter the value fo n "<<endl;
    cin>>n;
    answer = Fibo(n) ;
    cout<<"The nth term is :" << answer;

    return 0;

} 


