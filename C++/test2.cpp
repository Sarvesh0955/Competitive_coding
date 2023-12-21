#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a=n/3;
        ll b=(n-a)/2;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}