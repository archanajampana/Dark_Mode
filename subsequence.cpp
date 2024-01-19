#include<bits/stdc++.h>
using namespace std;
void fun(vector<int>v,int index,int size,vector<int>ans)
{
	if(index>=size)
	{
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<" ";
		}
		cout<<endl;
		return;
	}
	int hero=0;
	if(ans.size()==0)
	{
		ans.push_back(v[index]);
		fun(v,index+1,size,ans);
		ans.pop_back();
	}
	else if(ans.back()<v[index])
	{
		ans.push_back(v[index]);
		fun(v,index+1,size,ans);
		ans.pop_back();
	}
	else if(ans.back()>v[index])
	{
		fun(v,index+1,size,ans);
		hero=1;
		return;
	}
//	if(hero!=1)
//	{
		fun(v,index+1,size,ans);
//	}
}
int main()
{
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(1);
	v.push_back(8);
	fun(v,0,v.size(),{});
	
}
