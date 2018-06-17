#include"bits/stdc++.h"
#include"string.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<ll>v;
vector<ll>u;
vector<ll>w;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	ll n,i,j,p,q,r;
	cin>>n>>p>>q>>r;
	ll x[n];

	for(i=0;i<n;i++)
	{
		cin>>x[i];
		v.push_back(p*x[i]);
		u.push_back(q*x[i]);
		w.push_back(r*x[i]);
	}
	ll a,b,c;
	a = *max_element(v.begin(),v.end());
	b = *max_element(u.begin(),u.end());
	c = *max_element(w.begin(),w.end());
	cout<<a+b+c;
	return 0;
}