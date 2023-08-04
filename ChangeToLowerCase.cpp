#include<iostream>
using namespace std;

int lowerCase( char s)
{
    if(s>='a' && s<='z')
    {
        return s;
    }

    else{
        char temp = s -'A' + 'a';
        return temp;
    }
}

int main()
{
        char ans = lowerCase('F');
    cout << "Conversion is : "<< ans ;
}