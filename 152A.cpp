#include"bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	string s[a][b];

	int i,j,k=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>s[i][j];
		}
	}
	int hash[a]={};
	int max=0,id=0;
	for(i=0;i<b;i++)
	{
		max = s[i][0];
		for(j=1;j<a;j++)
		{
			if(max < s[i][j])
			{
				//
			}
		}
		
	}
	return 0;
}