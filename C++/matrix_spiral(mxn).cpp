#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m+1][n+1];
    bool A[m+1][n+1];
    for (int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
            A[i][j]=true;
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int l=1;l<=n/2 || l<m/2;l++)
    {
        if(n-l<=n && l<=m)
    	for(int j=l;j<=n-l;j++)
        {
            if(A[l][j]==true)
        	cout<<a[l][j]<<" ";
            A[l][j]=false;
        }
        if(m-l<=m && n-l+1<=n)
    	for(int i=l;i<=m-l;i++)
        {
            if(A[i][n-l+1]==true)
        	cout<<a[i][n-l+1]<<" ";
            A[i][n-l+1]=false;
        }
        if(n-l+1<=n && m-l+1<=m)
    	for(int j=n-l+1;j>=l+1;j--)
        {
            if(A[m-l+1][j]==true)
        	cout<<a[m-l+1][j]<<" ";
            A[m-l+1][j]=false;
        }
        if(m-l+1<=m && l<=n)
    	for(int i=m-l+1;i>=l+1;i--)
        {
            if(A[i][l]==true)
        	cout<<a[i][l]<<" ";
            A[i][l]=false;
        }
    }   
    if(n%2!=0 && m==n)
    {
    	cout<<a[n/2+1][n/2+1];
    } 
    return 0;
}