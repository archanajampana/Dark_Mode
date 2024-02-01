#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	stack<char>st;
	int i=0;
	for(int i=0;i<s.size();i++)
	{
		if (s[i]=='(' || s[i]=='[' || s[i]=='{')
		{
			st.push(s[i]);
		}
		else{
			if(s[i]==')'){
				if(!st.empty() && st.top()=='(')
				{
					st.pop();
				}
				else{
					cout<<"Invalid";
					break;
				}
				
			}
			else if(s[i]=='}'){
				if(!st.empty() && st.top()=='{')
				{
					st.pop();
				}
				else{
					cout<<"Invalid";
					break;
				}
		    }
			else{
				if(!st.empty() && st.top()=='[')
					{
					st.pop();
				}
				else{
					cout<<"Invalid";
					break;
				}
		
	        }
    }
}

if(i==s.size() && st.empty())
{
	cout<<"valid"<<" ";
}

}

	
	
	

