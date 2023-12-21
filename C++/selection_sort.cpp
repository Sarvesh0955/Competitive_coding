#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<n-1;i++)
    {
        ll min=a[i],index;
        for(ll j=i;j<n;j++)
        {
            if(min>=a[j])
            {
                min=a[j];
                index=j;
            }
        }
        swap(a[i],a[index]);
        
    }
    for(ll j=0;j<n;j++)
            cout<<a[j]<<" ";
    return 0;
}