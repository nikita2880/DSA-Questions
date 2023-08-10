#include<iostream>
#include<string>

using namespace std;

string removeOcc(string s, string part)
{
    while( s.length() != 0 && s.find(part)< s.length())
    {
        s.erase(s.find(part), part.length());

    }
    return s;
}

int main()
{
    string s, part;
    cout << "Enter string." << endl;
    cin >> s;
    cout << "Enter substring" << endl;
    cin >> part;

    cout << "String is : "<< removeOcc(s, part);

}