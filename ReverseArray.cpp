#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s=0;
    int e=v.size()-1;

    while(s<=e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> answer)
{
    for( int i=0 ; i<answer.size(); i++)
    {
        cout << answer[i]<< " ";
    }
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> answer=reverse(v);
    print(answer);
}