#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,l;
	cin>>a>>b;
	a= 2*a;b = 2*b;
	
	vector<string>x,y;
	string haha;
	vector<string>::iterator j,k;
	for(int i = 0 ; i < a ; i++)
	{
		cin>>haha;
		x.push_back(haha);
	}
	for(int i = 0 ; i < b ; i++)
	{
		cin>>haha;
		y.push_back(haha);
	}
	
	for(int i = 0 ; i < y.size() ; i++)
	{
		for(l = 0 ; y[i].at(l) != '\0' ; l++)
		if(y[i].at(l) == ';')
		{
			cout<<"hi";
		}
	}
	/*		
	for(int i = 0 ; i < y.size() ; i++)
	{
		if(y[i] == x[i])
		{
			cout<<y[i-1]<<" "<<y[i]<<";"<<" #"<<x[i-1]<<"\n";
		}
	}*/
	return 0;
}
