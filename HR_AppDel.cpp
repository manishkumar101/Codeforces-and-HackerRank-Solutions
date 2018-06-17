#include"bits/stdc++.h"
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int res;
	cin>>res;
	int i,j,k;
	int cnt=0;

	for(i=0 ; i<s2.length() ; i++)
	{
		if(s2[i] != s1[i])
		{
			cnt = (s2.length() - i) + (s1.length()-i);
			break;
		}
	}
	if(cnt == 0)
	{
		cnt = s1.length()-s2.length();
		if(cnt == res)
		{
			cout<<"Yes";
		}
	
		return 0;
	}
	if(cnt == res)
	{
		cout<<"Yes";
	}
	if(s1 == s2)
	{
		cout<<"Yes";
	}
	return 0;
}