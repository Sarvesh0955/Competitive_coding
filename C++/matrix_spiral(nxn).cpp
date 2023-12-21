#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1][n+1];
    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int l=1;l<=n/2;l++)
    {
    	for(int j=l;j<=n-l;j++)
        	cout<<a[l][j]<<" ";
    	for(int i=l;i<=n-l;i++)
        	cout<<a[i][n-l+1]<<" ";
    	for(int j=n-l+1;j>=l+1;j--)
        	cout<<a[n-l+1][j]<<" ";
    	for(int i=n-l+1;i>=l+1;i--)
        	cout<<a[i][l]<<" ";
    }   
    if(n%2!=0)
    {
    	cout<<a[n/2+1][n/2+1];
    } 
    return 0;
}