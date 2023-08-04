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

int palindrome(char arr[], int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if( lowerCase(arr[s]) != lowerCase(arr[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
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
    char arr[20];
    cout << "Enter the string." << endl;
    cin >> arr;
    int len = stringlength(arr);

    int ans=palindrome( arr, len);

    if(ans)
    {
        cout << "Palindrome string"<< endl;
    }
    else
    {
        cout << "Not palindrome" << endl;
    }

}