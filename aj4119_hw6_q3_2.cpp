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
    int i=0,temp;
    while((i+deleted) < arrSize)
    {
        if(arr[i] % 2 != 0)
        {
            temp = arr[arrSize-1-deleted];
            arr[arrSize-1-deleted]=arr[i];
            arr[i]=temp;
            deleted++;
        }
        else
        {
            i++;
        }

    }
    arrSize -= deleted;
    cout<<"The removeODD array size is: "<<arrSize<<"\n"
        <<"The removeODD output array is: ";
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
{   int arrSize=5;
    int arr[5]={1,2,3,4,5};
    //reverseArray(arr,arrSize);
    //removeOdd(arr,arrSize);
    splitParity(arr,arrSize);


    cout<<"The final array size is: "<<arrSize<<"\n"
        <<"The new array is: ";
        for(int i=0;i<arrSize;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}