#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<bool>Primes(n+1,true);
	Primes[0]=false;
	Primes[1]=false;
	for(int i=2 ;i<=sqrt(n);i++)
		{
			if(Primes[i])
			{
				for(int j=i*i;j<=n;j+=i)
				{
					if(Primes[j])
					{
						Primes[j]=false;
					}
				}
			}
		}
		for(int i=0;i<Primes.size();i++)
		{
			if(Primes[i])
			{
				
			cout<<i<<" ";
		    }
		}
	}

