#include<iostream>
using namespace std;

int minInArray(int arr[], int arrSize);
int minInArray(int arr[], int arrSize)
{   int min=0;
    for(int i=0;i<arrSize;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{   const int arrSize=20;
    int arr[arrSize]={4,6,-5,2,12,0,21,54,0,-45,23,12,0,-1,-4,54,-4,90,-43,12};
    cout<<minInArray(arr,arrSize);
    return 0;
}