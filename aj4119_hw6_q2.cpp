#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str);
bool isPalindrome(string str)
{
    bool isPal=true;
    int stringLength = str.length();
    for(int i=0;i<stringLength/2;i++)
    {
        if(str[i] != str[stringLength-1-i])
        {
            isPal=false;
            break;
        }
    }
    return isPal;
}

int main()
{ 
    string word;
    cout<<"Please enter a word: ";
    cin>>word;

    if(isPalindrome(word))
    {
        cout<<word<<" is a palindrome";
    }
    else
    {
        cout<<word<<" is not a palindrome";
    }

}