#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<int>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	fast;
	ll n,m,i,j,k;
	string s;

	cin>>n>>m;
	int x[n],y[m];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>y[i];

	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(x[i] == y[j])
			{
				cout<<x[i]<<" ";
			}
		}
	}
	return 0;
}