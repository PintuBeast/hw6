#include<iostream>
using namespace std;

const int ARR_SIZE = 20;
void minArrayWithIndex(int arr[]);
void minArrayWithIndex(int arr[])
{
    int min = arr[0];

    for(int i = 0 ; i < ARR_SIZE ; i++)
    {   
        if(arr[i] <= min)
        {
            min = arr[i];
        }
    }
    cout<<"the minimum value is "<<min
        <<", and it is located in the following indices: ";
    for(int i = 0 ; i < ARR_SIZE ; i++)
    {
        if(arr[i] == min)
        {
            cout<<i<<" ";
        }
    }
}


int main()
{   
    int arr[ARR_SIZE];
    cout<<"Please enter 20 integers separated by a space: \n";
    for(int i = 0 ; i < ARR_SIZE ; i++)
    {
        cin>>arr[i];
    }
    minArrayWithIndex(arr);
    return 0;
}