#include"bits/stdc++.h"
using namespace std;

std::map<int,int,greater<int>>m;
std::map<int,int,greater<int>>::iterator i;
int main()
{
	int n,k;
	cin>>n>>k;
	int a,id=1;
	while(n)
	{
		cin>>a;
		m.insert(pair<int,int>(a,id));
		id++;
		n--;
	}
	int cnt=1;
	for(i = m.begin() ; i!=m.end();i++)
	{
		if(cnt==k)
		{
			cout<<i->first;
			break;
		}
		cnt++;
	}
	cout<<endl;
	for(i = m.begin() ; i!=m.end();i++)
	{
		if(k>0)
		{
			cout<<i->second<<" ";
		}
		k--;
	}
	return 0;
}