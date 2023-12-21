#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int x=(sum/(n*n-n))+1;
    int ans[n][n];
    for(int i=0,k=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                ans[i][i]=a[k];
                cout<<ans[i][i]<<" ";
                k++;
            }
            else
            {
                ans[i][j]=x;
                cout<<ans[i][j]<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}   