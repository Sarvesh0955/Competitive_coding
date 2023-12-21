#include<bits/stdc++.h>
using namespace std;

void transpose(int *a,int *m,int *n)
{
	int temp=*m;
	*m=*n;
	*n=temp;
	int ans[*m][*n];
	cout<<"Order of tranapose matrix is: "<<*m<<"x"<<*n<<endl;
	for(int i=0;i<*m;i++)
	{
		for(int j=0;j<*n;j++)
			cout<<*(a+j*(*m)+i)<<" ";
		cout<<endl;
	}
}

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	transpose((int *)a,&m,&n);
	return 0;
}