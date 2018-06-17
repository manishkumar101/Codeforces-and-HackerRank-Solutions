#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<pair<int,int>>v;
vector<pair<int,int>>u;
priority_queue<int>pq;
std::map<int,int> m1,m2;
std::vector<pair<int,int>>::iterator it,ir;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main()
{
	int n;
	cin>>n;
	int i,j,a,b;
	int f1=0,f2=0;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		//v.push_back(make_pair(a,b));
		if(a<b){f1=1;}
		if(a>b){f2=1;}
	}
	if(f1==1&&f2==1)
	{
		cout<<"Happy Alex";
		return 0;
	}
	cout<<"Poor Alex";
	return 0;
}