// vector = dynamic nature


#include<bits/stdc++.h>
using namespace std;

void vectorSolve()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // faster than push_back. dynamically increase the size and push 


    // vector with pair
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);


    vector<int> v1(5,100); // 100 100 100 100 100
    vector<int> v2(5); // 0 0 0 0 0


    // copy of vector
    vector<int> v3(5,20);
    vector<int> v4(v3);


    // access:
    // like array
    // or, iterator

    vector<int> :: iterator it = v.begin(); // v.begin(): memory address of first element of v vector
    cout<<*(it)<<endl; // 1

    it++; // second element
    cout<<*(it)<<endl; // 2


    vector<int> v5= {1,2,3,4,5};
    vector<int> :: iterator it5 = v5.end(); // this is the not the end element's address. this is the address of after end
    it5--; // this is the end now
    cout<<*(it5)<<endl;

    // vector<int> :: iterator it6 = v5.rend();  // reverse end
    // vector<int> :: iterator it7 = v5.rbegin();  // reverse begin


    cout<<v5.back()<<endl; // back element of v5 = 5


    cout<<endl<<endl;
    // print:
    for (vector<int> :: iterator it = v5.begin(); it != v5.end(); it++)
    {
        cout<<*(it)<<endl;
    }

    // shortcut:
    cout<<endl<<endl;
    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout<<*(it)<<endl;
    }

    // shortcut:
    cout<<endl<<endl;
    for (auto it : v5)
    {
        cout<<it<<endl;
    }




}

int main()
{
    vectorSolve();
}