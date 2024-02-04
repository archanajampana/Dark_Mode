#include<bits/stdc++.h>
using namespace std;
void per(string s,int start,int end){
	if(start==end){
		cout<<s<<endl;
	}
	for(int i=start;i<=end;i++)
	{
		swap(s[start],s[i]);
//		cout<<start<<i<<end<<endl;
		per(s,start+1,end);
//		cout<<start<<i<<end<<endl;
		swap(s[start],s[i]);
	}
}
int main()
{
	string s;
	cin>>s;
	per(s,0,s.size()-1);
}
