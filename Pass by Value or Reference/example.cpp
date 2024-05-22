#include<iostream>
using namespace std;

void passByValue(string s)
{
    s[0]= 'b';
    cout<< s <<endl;
}

void passByReference(string &s)
{
    s[0]= 'b';
    cout<< s <<endl;
}

int main()
{
    string s = "joy";
    
    passByValue(s);
    cout<< s<<endl;
    // pass by value: pass the copy of value
    // output:
    // boy 
    // joy


    string a = "joy";
    passByReference(a);
    cout<< a<<endl;
    // pass by Reference: pass the original value
    // output:
    // boy 
    // boy

    return 0;

}