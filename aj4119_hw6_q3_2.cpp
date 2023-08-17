#include<iostream>
using namespace std;
void removeOdd(int arr[], int& arrSize);
void reverseArray(int arr[],int arrSize);

void reverseArray(int arr[],int arrSize)
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
    cout<<"The final array size is: "<<arrSize<<"\n"
        <<"The new array is: ";
        for(int i=0;i<arrSize;i++)
        {
            cout<<arr[i]<<" ";
        }
}
int main()
{   int arrSize=4;
    int arr[4]={1,2,3,4};
    removeOdd(arr,arrSize);
    return 0;
}