#include<bits/stdc++.h>
using namespace std;
void gcd(int x,int y){
	if(x>y){
		x,y=y,x;
	}
	if(x==0){
		cout<<y;
		return ;
	}
	else{
		gcd(y%x,x);
	}
	
}
int main()
{
	int x,y;
	cin>>x>>y;
	gcd(x,y);
}
