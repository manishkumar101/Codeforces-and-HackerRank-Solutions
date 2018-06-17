#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	ll n;
	cin>>n;
	ll i,j,cnt=0;
	ll t=n;
	string s1="";

	while(n)
	{
		s1 = s1 + s;
		n--;
	}
	
	for(i=0;i<t;i++)
	{
		if(s1[i]=='a')
		{
			cnt++;
		}
	}
	cout<<cnt;

	return 0;
}