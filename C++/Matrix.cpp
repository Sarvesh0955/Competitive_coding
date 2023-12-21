#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int matrix[n+1][m+1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin>>matrix[i][j];
		}
	}
	int count=0;
	for (int i = 1; i <= n; i++)
	{
		int sumrow=0,sumcolumn=0;
		for (int j = 1; j <= m; j++)
		{
			sumrow+= matrix[i][j];
		}
		for (int j = 1; j <= n; j++)
		{
			sumcolumn+= matrix[j][i];
		}
		if(sumrow == sumcolumn)
		{
			count++;
		}
		else
		{
			cout<<"0"<<endl;
			break;
		}
	}
	if(count == m || count == n)
	{
		cout<<"1"<<endl;
	}
	return 0;
}