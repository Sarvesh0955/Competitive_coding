// N integers. Find the count of numbers divisible by K.
#include <iostream> 

using namespace std;

int main() {
	int A,N,K,count=0;
	cin>>N>>K;
	for(int i=1; i<=N ; i++)
	{
	    cin>>A;
	    if(A%K == 0)
	    {
	       count++; 
	    }
	}
	cout<<count;
	return 0;
}