#include"bits/stdc++.h"
using namespace std;

typedef pair<int,int>ipair;
std::vector<pair<int,ipair>>v;
std::vector<pair<int,ipair>>::iterator itr,it;

std::queue<int>q;

int main(int argc, char const *argv[])
{
	int n,k;
	int i,j;
	cin>>n>>k;
	int a,b,c;
	while(k)
	{
		cin>>a>>b>>c;
		v.push_back({c,{a,b}});
		k--;
	}
	sort(v.begin(),v.end());
	bool chk=false;
	int l = 1,flg=0;;
	while(chk==false)
	{
		for(itr=v.begin();itr!=v.end();itr++)
		{
			if(itr->second.first == l)
			{
				q.push(itr->second.first);
				l = itr->second.second;
				if(l==n)
				{
					q.push(l);
					while(!q.empty())
					{
						cout<<q.front()<<" ";
						q.pop();
					}
					return 0;
				}
				flg=1;
				break;
			}

		}
		if(flg==0)
		{
			cout<<-1;
			return 0;
		}
		flg=0;
	}
	
	
	
	return 0;
}