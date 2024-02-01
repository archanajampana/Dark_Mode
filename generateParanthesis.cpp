#include<bits/stdc++.h>
using namespace std;
void check(int close,int open,string s,int n)
{
	if(close+open>=2*n)
	{
		cout<<s<<endl;
		return;
	}
	if(close>open) return;
	if(open==n){
		check(close+1,open,s+')',n);
	}
	else{
		check(close,open+1,s+'(',n);
		check(close+1,open,s+')',n);
	}
}
int main()
{
	int n;
	cin>>n;
	check(0,1,"(",n);
	
}
