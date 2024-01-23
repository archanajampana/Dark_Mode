#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		
		int data;
		Node *next;
		Node(int data)
		{
			this->data=data;
			this->next=NULL;
		}
};
int main()
{
	int n,x;
	cin>>n;
	Node *head=new Node(0);
	Node *temp=head;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		Node *NN= new Node(x);
		temp->next=NN;
		temp=temp->next;
	}
while(temp)
{
//	cout<<temp->data<<" ";
	temp=temp->next;
}
Node *res=NULL;
temp=head;
while(temp)
{
	Node *BC=new Node(temp->data);
	if(res==NULL)
	{
		res=BC;
	}
	else
	{
		Node * AC=new Node(temp->data);
		AC->next=res;
		res=AC;
	}
	temp=temp->next;
}
while(res)
{
	cout<<res->data<<" ";
	res=res->next;
}
}


