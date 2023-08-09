#include<iostream>
#include<string>

using namespace std;

string removceAdjDuplicates(string s)
{
    string temp="";
    for ( int i=0 ; i < s.length(); i++)
    {
        if ( temp[i] == temp[i+1])
        {
           s.erase(i+1,1);
           temp=s;
        }
        else{
            temp.push_back(s[i]);
        }
        
    }
    return s;
}


int main()
{
    string s;
    cout << "Enter string." << endl;
    cin >>  s;

    cout << "The string now is : "<< removceAdjDuplicates(s);

}