#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    const int PIN=12345, ARRAY_SIZE=5;
    int arr[ARRAY_SIZE];
    cout<<"Please enter your PIN according to the following mapping: \n"
        <<"PIN: 0 1 2 3 4 5 6 7 8 9\n"
        <<"NUM: ";
    for(int i=0;i<10;i++)
    {  
        arr[i]=rand() % 3 + 1;
        cout<<arr[i]<<" ";
    }
    cout<<"\n:";
    int num;
    bool match=true;
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        cin>>num;
        if(arr[i]!=num)
        {
            match=false;
            break;
        } 
    }    
    if(match)
    {
        cout<<"Your PIN is correct";
    }
    else
    {
        cout<<"Your PIN is correct";

    }
    
    return 0;

}