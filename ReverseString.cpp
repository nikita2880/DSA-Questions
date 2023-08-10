#include<iostream>
using namespace std;

void reverse(char name[], int l)
{
    int i,s,e;
    s=0;
    e=l-1;
    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}

int stringlength( char name[])
{
    int count=0;
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
    int len = stringlength(name);

    cout << "The length of your name is : "<< len << endl;
    reverse(name, len);

    cout << "Your reverse name is : "<< name;

}