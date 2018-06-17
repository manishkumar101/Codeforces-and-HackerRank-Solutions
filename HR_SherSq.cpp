#include"bits/stdc++.h"
using namespace std;

int main()
{
	int n,t;
	cin>>n;
	t = n;
	int count=0;
	int x,y,i;
	vector<int>v;

	while(n)
	{
		
		double ch;
		cin>>x>>y;
		for(i=x;i<=y;i++)
		{
			ch = pow(i,0.5);
			if(ceil(ch) == ch)
			{
				count++;
			}
		}
		v.push_back(count);
		count=0;
		n--;
	}
	for(i=0;i<t;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}