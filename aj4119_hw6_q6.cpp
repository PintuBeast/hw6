#include<iostream>
#include<string>
using namespace std;
bool isNum(string str);
bool isNum(string str)
{
    bool isNumber=true;
    for(int i = 0 ; i < str.length() ; i++)
    {
        if((str[i] >= 'a' && str[i] <='z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            isNumber = false;
        }

    }
    return isNumber;
}
void maskNum(string str);
void maskNum(string str)
{
        for(int i = 0 ; i < str.length() ; i++)
    {
        cout<<"x";

    }
    cout<<" ";

}
void parseString(string str);
void parseString(string str)
{
    string word = "";
    for(int i = 0 ; i <= str.length() ; i++)
    {
        
        bool isNumber = false;
       // cout<<i<<" "<<(int)str[i]<<"\t";
        if((int)str[i] == ' ' || i == str.length())
        {   
            
            if(isNum(word) == true)
            {
                maskNum(word);
            }
            else
            {
                cout<<word<<" ";
            }
            //cout<<word<<" "<<isNumber<<"\t";
            word = "";
        }else
        {
            word += str[i];
            
        }

    }

}
int main()
{
    string str;
    cout<<"Please enter a string:\n";
    getline(cin,str);
    parseString(str);
    return 0;
}