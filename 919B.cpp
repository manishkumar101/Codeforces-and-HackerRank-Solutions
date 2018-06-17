#include<bits/stdc++.h>
#include <sstream>
using namespace std;

typedef long long l;
vector<l>v;
vector<int>::iterator ll;

int check(int x)
{
	int y,sum=0;
	int r = x;
	while(x > 0)
	{
		y = x%10;
		sum = sum + y;
		x = x/10;
		
	}
	if(sum == 10)
	{
	
		v.push_back(r);
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	l i,j,k;
	int chk;
	
	

	for(i = 19 ; i <= 100000000 ; i+=9)
	{
		chk = check(i);
		
	}
	int ch;
	cin>>ch;
	cout<<v[ch-1];
	return 0;
}

