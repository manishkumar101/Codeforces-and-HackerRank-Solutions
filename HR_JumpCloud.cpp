#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n];
	int i,j;

	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	int cnt=0;
	for(i=0;i<n;i++)
	{
		if(x[i+1]==0&&x[i+2]==0)
		{
			i++;
			cnt++;
		}
		if(x[i+1]==0&&x[i+2]==1)
		{
			cnt++;
		}
		else
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}