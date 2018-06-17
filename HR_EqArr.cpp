#include"bits/stdc++.h"
using namespace std;

int hashs[100];
int main()
{
	int n;
	cin>>n;
	int x[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		hashs[x[i]]++;
	}
	sort(hashs,hashs+100,std::greater<int>());
	int sum=0;
	for(i=1;i<100;i++)
	{
		sum = sum + hashs[i];
	}
	cout<<sum;

}