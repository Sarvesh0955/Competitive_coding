#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n-1;i++)
    {
        if(a[i]>=a[i+1])
        {
            int key=a[i+1],j=i;
            while(j>=0 && a[j]>key)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=key;
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}