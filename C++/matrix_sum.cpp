#include<bits/stdc++.h>
using namespace std;

int sum(int *a,int i,int n)
{
	int ans=0;
	ans=*(a+i*n+(i+1))+*(a+i*n+(i-1))+*(a+(i+1)*n+i)+*(a+(i-1)*n+i)+*(a+(i+1)*n+(i+1))+*(a+(i-1)*n+(i-1))+*(a+(i-1)*n+(i+1))+*(a+(i+1)*n+(i-1));
	return ans;
}

int main(){
	int n;
	cin>>n;
	//Declaring array with two more rows and coulumn 
	//for value at first and last diag element.
	int a[n+2][n+2]={0};
	//asigning extra rows zero.
	for(int i=0;i<n+2;i++)
	{
		a[0][i]=0;
		a[n-1][i]=0;
		a[i][0]=0;
		a[i][n-1]=0;
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	int max=0,index;
	for(int i=1;i<=n;i++)
	{
		int temp=sum((int *)a,i,n+2);
		cout<<i<<':'<<temp<<endl;
		if(max<=temp)
		{
			max=temp;
			index=i;
		}
	}
	cout<<"Max at index :"<<index<<endl;
	return 0;
}