#include<iostream>
using namespace std;

void print(int n,int i)
{
    for(int k=n; k>n-i;k--){
                    cout<<k<<" ";
                }
	for (int j = i; j <= (2*n-i-2) ; j++)
			{
				cout<<n+1-i<<" ";
                
			}
    for(int j=n-i; j<n;j++){
                    cout<<j+1<<" ";
                }  
    cout<<endl;                  
}

int main() {
    int n,a;
	// cout<<"Enter number: ";
	cin>>n;
    // print(n,1);
    for (int i = 1; i <=n-1; i++)
    {
       print(n,i);   
    }
    for (int j=n; j>0; j--)
    {
        cout<<j<<" ";
    }
    for (int k=2; k<=n; k++)
    {
        cout<<k<<" ";
    }
    cout<<endl;
    for (int l = n-1; l>0; l--)
    {
       print(n,l);   
    }
    
    return 0;
}