#include<iostream>
using namespace std;
void removeOdd(int arr[], int& arrSize);
void reverseArray(int arr[],int& arrSize);

void reverseArray(int arr[],int& arrSize)
{   int temp;
    for(int i = 0 ; i < arrSize / 2 ; i++)
    {
        temp = arr[arrSize - 1 - i];
        arr[arrSize - 1 - i] = arr[i];
        arr[i] = temp;
    }

}

void removeOdd(int arr[], int& arrSize)
{
    int deleted = 0;
    int i = 0,temp_index = 0,n = arrSize;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] %2 == 0)
        {
            arr[temp_index++] = arr[i];

        }
        else
        {
            deleted++;
        }
    }

    arrSize -= deleted;


}
void splitParity(int arr[], int& arrSize);
void splitParity(int arr[], int& arrSize)
{   int i = 0,j = arrSize - 1,temp; 
    while(i < arrSize && j >= 0 && i != j)
    {    while(arr[i] %2 != 0 && i < j)
        {
            i++;
        }

        while(arr[j] %2 == 0 && j > i)
        {
            j--;
        }

        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;

    }

}

void printArray(int arr[], int arrSize);

int main() {
 int arr1[10] = {9, 2, 14, 12, -3};
 int arr1Size = 5;
 
 int arr2[10] = {21, 12, 6, 7, 14};
 int arr2Size = 5;
 
 int arr3[10] = {3, 6, 4, 1, 12};
 int arr3Size = 5;
 
 reverseArray(arr1, arr1Size);
 printArray(arr1, arr1Size);
 
 removeOdd(arr2, arr2Size);
 printArray(arr2, arr2Size);
 
 splitParity(arr3, arr3Size);
 printArray(arr3, arr3Size);
 
 return 0;
}
void printArray(int arr[], int arrSize){
 int i;
 
 for (i = 0; i < arrSize; i++) {
 cout<<arr[i]<<' ';
 }
 cout<<endl;
}