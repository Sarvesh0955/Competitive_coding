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
            int b[i+2],k=0;
            for(int j=0;j<i+1;j++)
            {
                if(a[i+1]>=a[j])
                {
                    b[k]=a[j];
                    k++;
                }
                else
                {
                    b[k]=a[i+1];
                    k++;
                    for(int l=k;l<i+2;l++)
                    {
                        b[k]=a[j];
                        k++;j++;
                    }
                    break;
                }
            }
            for(int j=0;j<i+2;j++)
                a[j]=b[j];
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}