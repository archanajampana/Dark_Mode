#include<bits/stdc++.h>
using namespace std;
int fun(int n,vector<int>&dp)
{
	if(n==0) return 0;
	if(n==1) return 1;
//	else{
//		return fun(n-1)+fun(n-2);
//	}
	if(dp[n-1]==-1){
		dp[n-1]=fun(n-1,dp);
	}
	if(dp[n-2]==-1)
	{
		dp[n-2]=fun(n-2,dp);
	}
	dp[n]=dp[n-1]+dp[n-2];
	return dp[n];
	
}
int main()
{
	int n;
	cin>>n;
	vector<int>dp(30,-1);
	cout<<fun(n-1,dp);
	
}
