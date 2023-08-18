#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

bool verifyPin(const int PIN[],int userEntry[],int mask[],int pinSize, int maskSize);

bool verifyPin(const int PIN[],int userEntry[],int mask[],int pinSize, int maskSize)
{
    bool match=true;
    for(int i=0;i<pinSize;i++)
    {   
        if(mask[PIN[i]]!=userEntry[i])
        {
            match=false;
            break;
        } 
    } 
    return match;   

}

int main()
{
    srand(time(0));
    const int PIN[]={3,2,4,6,5}, PIN_SIZE=5,MASK_SIZE=10 ;
    int mask[MASK_SIZE];
    cout<<"Please enter your PIN according to the following mapping: \n"
        <<"PIN: 0 1 2 3 4 5 6 7 8 9\n"
        <<"NUM: ";
    for(int i=0;i<10;i++)
    {  
        mask[i]=rand() % 3 + 1;
        cout<<mask[i]<<" ";
    }
    cout<<"\n:";
    int num;
    
    int userEntry[PIN_SIZE];
    for(int i=0;i<PIN_SIZE;i++)
    {
        cin>>userEntry[i];
    }

    if(verifyPin(PIN,userEntry,mask,PIN_SIZE, MASK_SIZE)==true)
    {
         cout<<"Your PIN is correct";

    }
    else
    {
        cout<<"Your PIN is not correct";

    }
    
    return 0;

}