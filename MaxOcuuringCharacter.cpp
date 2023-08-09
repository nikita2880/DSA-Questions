#include<iostream>
#include<string>

using namespace std;

char maxOccuring(string s)
{
    int arr[26]={0},number=0;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            number= s[i] - 'a';
        }
        else{
            number= s[i] - 'A';
        }

        arr[number]++;
    }
    int ans=-1;
    int maxi = -1;

    for (int i=0; i<26; i++)
    {
        if ( maxi < arr[i])
        {
            ans= i;
            maxi=arr[i];
        }

       
    }

    char finalA = 'a' + ans;
    return finalA;
}

int main()
{
    string s;
    cout << "Enter the word." << endl;
    cin >> s;

    cout << "Character the occured the most is : "<< maxOccuring(s)<< endl;

}