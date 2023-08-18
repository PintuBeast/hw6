#include<iostream>
using namespace std;
void removeOdd(int arr[], int& arrSize);
void reverseArray(int arr[],int& arrSize);

void reverseArray(int arr[],int& arrSize)
{   int temp;
    for(int i=0;i<arrSize/2;i++)
    {
        temp= arr[arrSize-1-i];
        arr[arrSize-1-i]=arr[i];
        arr[i]=temp;
    }

}

void removeOdd(int arr[], int& arrSize)
{
    int deleted=0;
    int i=0,temp_index=0,n=arrSize;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        {
            arr[temp_index++]=arr[i];

        }
        else
        {
            deleted++;
        }
    }

    arrSize -= deleted;
    cout<<"The removeODD output array is: ";
        for(int i=0;i<arrSize;i++)
        {
            cout<<arr[i]<<" ";
        }
}
void splitParity(int arr[], int& arrSize);
void splitParity(int arr[], int& arrSize)
{   int i=0,j =arrSize-1,temp; 
    while(i<arrSize && j>=0 && i!=j)
    {    while(arr[i]%2 != 0 && i<j)
        {
            i++;
        }

        while(arr[j] %2 == 0 && j>i)
        {
            j--;
        }

        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;

    }
        cout<<"The splitParity output array is: ";
        for(int i=0;i<arrSize;i++)
        {
            cout<<arr[i]<<" ";
        }
}

int main()
{   int arrSize=8;
    int arr[8]={2,2,3,3,3,5,7,8};
    
    cout<<"The Initial array size is: "<<arrSize<<"\n"
        <<"The array is: ";
        for(int i=0;i<arrSize;i++)
        {
            cout<<arr[i]<<" ";
        }
    reverseArray(arr,arrSize);
    removeOdd(arr,arrSize);
    splitParity(arr,arrSize);


    return 0;
}