#include<bits/stdc++.h>
using namespace std;
void digit_sum(int n,int r)
{
	if(n==0)
	{
		cout<<r;
		return;
	}
	int d=n%10;
	r+=d;
	n=n/10;
	digit_sum(n,r);
}
int main()
{
	int n;
	cin>>n;
	digit_sum(n,0);
	
}
