#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	string s;
	int i,j,k;
	
	cin>>a;
	cin>>s;
	
	transform(s.begin(),s.end(),s.begin(),::tolower);
	
	int x[26] = {};
	int ascii = 96;
	
	for(i = 0 ; i < 26 ; i++)
	{
		ascii++;
		x[i] = ascii;		
	}
	
	
	for(i = 0 ; i < s.length() ; i++)
	{
		for(j = 0 ; j < 26 ; j++)
		{
			if((int)s[i] == x[j])
			{
				x[j] = 0;
				break;
			}
		}
	}
	
	for(i = 0 ; i < 26 ; i++)
	{
		if(x[i] != 0)
		{
			cout<<"NO";
			return 0;
		}
		
	}
	cout<<"YES";
	
	return 0;
}
