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
	string s;
	int i;
	int l=0;
	cin>>n;
	string str="";
	while(n>0)
	{
		cin>>s;
		if(s[1]>=65 && s[1]<=90)
		{
			l = 26*((int)s[0]-64) + ((int)s[1]-64);	
			str = "R+s[2]+s[3]+'C'";
		}
		
		n--;
	}
	cout<<str;
	return 0;
}