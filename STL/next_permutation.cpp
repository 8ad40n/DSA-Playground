#include<bits/stdc++.h>
using namespace std;

void permutationSolve()
{
    string s = "123";
    //sort(s.begin(), s.end());

    do{
        cout<<s<<endl;
    } while(next_permutation(s.begin(), s.end()));

}

int main()
{
    permutationSolve();
}