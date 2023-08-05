#include<iostream>
using namespace std;

int stringlength( char name[])
{
    int count;
    for(int i=0; name[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name." << endl;
    cin >> name;
    

    cout << "The length of your name is : "<<stringlength(name);
}