#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"enter: ";
    cin>>s;
    if(s[0]=='"')
    {
        cout<<'"' ;
    }
    for (int i = 0; i < s.size(); ++i)
    {
        if(s[i]=='G')
        {
            cout<<"G";
        }
    }
    for (int i = 0; i < s.size()-1; ++i)
    {
        if(s[i]=='(' && s[i+1]==')' )
        {
            cout<<"o";
        }
    }
    for (int i = 0; i < s.size()-3; ++i)
    {
        if(s[i]=='(' && s[i+1]=='a' && s[i+2]=='l' && s[i+3]==')')
        {
            cout<<"al";
        }
    }
    if(s[s.size()-1]=='"')
    {
        cout<<'"';
    }
    return 0;
}