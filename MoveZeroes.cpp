#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int i=0;
    for(int j=0; j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j],arr[i]);
            i++;

        }
    }
    for(int i=0; i<5;i++)
    {
        cout << arr[i] << "  ";
    }

}

int main()
{
    int arr[5]={1,5,0,2,0};

    moveZeroes(arr, 5);

}