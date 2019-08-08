#include<iostream>
using namespace std;
class linked
{
	public:int data;
	public:linked *next;
	linked(int d)
	{
		data=d;
		next=NULL;
	}
};
linked *head;
linked *point;
void insert(int data)
	{
		if(head==NULL)
		{
			head=new linked(data);
			point=head;
			
		}
		else
		{
			linked *temp=new linked(data);
			point->next=temp;
			point=temp;

		}
	
	}
void display()
{
	linked *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{

int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{int x;
		cin>>x;   
insert(x);
		
	}
	display();
}
