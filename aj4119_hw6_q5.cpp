#include<iostream>
#include<string>
using namespace std;
void formatMiddleName(string str);

void formatMiddleName(string str)
{
    
    cout<<str[0]<<". ";
    

}

int main()
{
    string firstName, middleName, lastName;
    cout<<"Please enter your name in the fomat: format: "
    <<"first name, then middle name or initial, and then last name.";
    cin>>firstName;
    cin>>middleName;
    cin>>lastName;
    
    cout<<firstName<<" ";
    formatMiddleName(middleName);
    cout<<lastName;
    return 0;
}