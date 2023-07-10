/*

#include<iostream>
using namespace std;

int getMax(int arr[], int size )
{
    int max= INT_MIN;
    for(int i=0; i<size ; i++)
    {
        if(arr[i] > max )
        max= arr[i];
    }
    return max;
}

int getMin(int arr[], int size )
{
    int min = INT_MAX;
    for(int i=0; i<size ; i++)
    {
        if(arr[i] < min )
        min = arr[i];
    }
    return min;
}


int main()
{
    int size;
    cout <<"Enter the size of array"<<endl;
    cin >> size;

    int arr[100] ;

    cout << "Enter the values in array"<< endl;

    for(int i=0; i<size ; i++)
    {
        cin>>arr[i];
    }

    cout << "Maximun value is : " << getMax( arr , size)<<endl;
    cout << "Minimum value is : " << getMin( arr , size)<<endl;

}*/



// HOME WORK QUESTION : PRINT THE SUM OF ALL ELEMENTS IN AN ARRAY


/*
#include<iostream>
using namespace std;

int sumArray( int arr[] , int n )
{
    int sum;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size, arr[500], i, answer ;
    cout<<"Enter the size of array . " << endl;
    cin>>size;
    cout<<"Enter the elements of array. "<< endl;
    for( i=0 ; i<size ; i++ )
    {
        cin >> arr[i] ;
        cout << endl ;
    }
    answer = sumArray( arr , size);
    cout << "The sum of array is : " << answer << endl;
    return 0;
}*/


// LINEAR SEARCH PROGRAM

/*
#include<iostream>
using namespace std;


bool searchElement ( int arr [], int size, int key )
{
    
    for( int i = 0; i<size; i++)
    {
        if ( arr[i] == key)
        {
            return 1;      // Element found
        }
        
    }
    return 0;
}


int main()
{
    int size, arr[500], i, answer, key ;

    cout<<"Enter the size of array . " << endl;
    cin>>size;

    cout<<"Enter the elements of array. "<< endl;
    for( i=0 ; i<size ; i++ )
    {
        cin >> arr[i] ;
        cout << endl ;
    }

    cout<<" ENter element to be searched ." <<endl;
    cin>> key ;

    bool found = searchElement ( arr, size, key);
    if (found)
    {
        cout<<" ELement found !"<<endl;
    }
    else
    cout<<"Element does not exist !"<<endl;


}
*/


// REVERSE OF AN ARRAY

/*
#include <iostream>
using namespace std;

void reverse( int arr[], int size)
{
    int start, end, i;
    start = 0;
    end = size-1;
    while ( start <= end)
    {
        swap( arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray( int arr[] , int size)
{
    for( int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size, arr[500], i, answer ;

    cout<<"Enter the size of array . " << endl;
    cin>>size;

    cout<<"Enter the elements of array. "<< endl;
    for( i=0 ; i<size ; i++ )
    {
        cin >> arr[i] ;
        cout << endl ;
    }
    reverse ( arr , size);
    printArray ( arr , size);

}*/


// QUESTION 1 : SWAP ALTERNATE ELEMENTS


#include<iostream>
using namespace std;


void swapAlternate( int arr[] , int size )
{
    int i,t ;
    for( i=0 ; i<size ; i = i+2 )
    {
        if ( i+1 < size )
        {
            t = arr[i] ;
            arr[i] = arr[i+1] ;
            arr[i+1] = t ;
        }
    }

}

void printArray( int arr[] , int size)
{
    for( int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int size, arr[500], i, answer ;

    cout<<"Enter the size of array . " << endl;
    cin>>size;

    cout<<"Enter the elements of array. "<< endl;
    for( i=0 ; i<size ; i++ )
    {
        cin >> arr[i] ;
        
    }
    
    swapAlternate ( arr , size );
    printArray ( arr, size );

}