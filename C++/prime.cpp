#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=100000,j=1;
    // cin>>n;
    bool prime[n+1]={false};
    prime[1]=true;
    for(int i=2;i<=n;i++)
    {
        for(j=2;j<=n/i;++j)
        {
            prime[i*j]=true;
        }
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        
        if(prime[i]!=true)
        {
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=1;i<=n;i++)
    {
        
        if(prime[i]!=true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}