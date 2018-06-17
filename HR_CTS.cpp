//cut the stick
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
	sort(x,x+n);
	int cnt=0;
	for(i=0;i<n;i++)
	{
		if(x[i] == 0)
		{
			continue;
		}
		else
		for(j=0;j<n;j++)
		{
			if(x[j] != 0)
			{
				x[j] = x[j]-x[i];
				cnt++;
			}
		}
		cout<<cnt<<endl;
		cnt=0;
		
		
	}	
	return 0;
}