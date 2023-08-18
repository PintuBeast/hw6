#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstName, middleName, lastName;
    cout<<"Please enter your name in the fomat: format: "
    <<"first name, then middle name or initial, and then last name.";
    cin>>firstName;
    cin>>middleName;
    cin>>lastName;
    cout<<firstName<<" "<<middleName[0]<<". "<<lastName;
    return 0;
}