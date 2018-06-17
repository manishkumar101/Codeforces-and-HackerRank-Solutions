#include"bits/stdc++.h"
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
vector<string>v;
vector<int>u;
priority_queue<int>pq;
std::map<int,int> m;
const int N=1e6+10;
int flg=0;
/*--------------------------hbp16@hbp16-Inspiron-3543:-$------------------------------*/
bool chk(string str,int l)
{

	int i,j;
	for(i=0;i<str.length();i++)
	{
		if(str[i]==str[str.length()-i-1])
		{
			continue;
		}
		else
			return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	string s,str;
	cin>>s;
	int i,j,k;
	int val;
	for(i=0;i<s.length()-1;i++)
	{
		for(j=0;j<s.length()-1;j++)
		{
			str = s.substr(i,s.length()-j);
			//cout<<str<<endl;
			val = chk(str,s.length()-j);
			if(val==0)
			{
				cout<<s.length()-j;
				return 0;
			}
			else
			{
				continue;
			}
		}
		
	}
	if(flg==0)
	{
		cout<<"0";
	}
	return 0;
}