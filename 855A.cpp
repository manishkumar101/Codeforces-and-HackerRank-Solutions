#include"bits/stdc++.h"
#include"string.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<string>::iterator itr,i;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	while(n)
	{
		cin>>s;
		v.push_back(s);
		n--;
	}
	
	int flg = 0;
	cout<<"NO"<<endl;
	for(itr = v.begin()+1;itr != v.end() ; itr++)
	{
		for(i = v.begin() ; i != itr ; i++)
		{
			if(*i == *itr)
			{
				cout<<"YES"<<endl;
				flg=1;
				break;
			}
		}
		if(flg == 0)
		{
			cout<<"NO"<<endl;
		}
		flg = 0;
	}
	return 0;
}