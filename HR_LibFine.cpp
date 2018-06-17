#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
int main()
{
	ll d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;

	if(y1 > y2)
	{
		return cout<<"10000",0;
	}
	else if(y1 == y2)
	{
		if(m1 > m2)
		{
			return cout<<(500*(m1-m2)),0;
		}
		else
		{
			if(d1 > d2)
			{
				return cout<<(d1-d2)*15,0;
			}
			else if(d1 == d2)
			{
				return cout<<"0",0;
			}
		}
	}
	else
	{
		cout<<"0";
		return 0;
	}
	return 0;
}