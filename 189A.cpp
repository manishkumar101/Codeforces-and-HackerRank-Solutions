#include"bits/stdc++.h"
using namespace std;
int main()
{
	int k;
	cin>>k;
	vector<int>v;
	vector<int>::iterator itr,jtr;
	int i,cnt=0,haha;
	for(i=0;i<3;i++)
	{
		cin>>haha;
		v.push_back(haha);
	}
	v.erase(unique(v.begin(),v.end()),v.end());
	for(itr=v.begin();itr!=v.end();itr++)
	{
		for(jtr=v.begin();jtr!=v.end();jtr++)
		{
			if(v.begin()==v.end())
			{
				cout<<"1";
				return 0;
			}
			if(*itr+*jtr==k||*itr==*jtr)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}