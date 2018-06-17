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
	
	int n;
	cin>>n;
	int x[n];
	int i,cnt1=0,cnt2=0,ans;
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
		x[i] == 1 ? cnt1++:cnt2++;
	}
	if(cnt2==0)
	{
		cout<<cnt1/3;
		return 0;
	}
	if(cnt2<cnt1)
	{
		ans = cnt1-cnt2;
		ans = ans/3;
		cout<<ans+min(cnt1,cnt2);
		return 0;
	}
	cout<<min(cnt2,cnt1);
	return 0;
}