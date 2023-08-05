#include<iostream>
using namespace std;

int lowerCase( char s)
{
    if((s>='a' && s<='z') || (s>='0' && s<='9') )
    {
        return s;
    }

    else{
        char temp = s -'A' + 'a';
        return temp;
    }
}

bool validChar(char ch)
{
    if ( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>= '0' && ch<='9'))
    {
        return 1;
    }
    else return 0;
}


int palindrome(string arr)
{
    int st=0;
    int e=arr.length()-1;
    while(st<=e)
    {
        if( (arr[st]) != (arr[e]))
        {
            return 0;
        }
        else{
            st++;
            e--;
        }
    }
    return 1;
}


bool validPlaindrome ( string s)
{
    string temp="";

    for ( int i=0; i<s.length(); i++ )
    {
        if( validChar(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    for( int i=0; i<temp.length(); i++)
    {
        temp[i] = lowerCase(temp[i]);
    }

    return palindrome(temp);

}

int main()
{
    string s="Bs0i%0@sb";

    cout << "Answer is : " << validPlaindrome(s);
}