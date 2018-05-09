// head.cpp : Defines the entry point for the console application.
//

// insert after head.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdio.h>

using namespace std;

struct node
{
	int data;
	node* link;
	node()
	{
		data=0;
		link=0;
	}

};
typedef node* nodeptr;
nodeptr head;


void before_head()
{
	nodeptr temp=new node;
	temp->data=13;
	temp->link=head;
	head=temp;
	cout<<"element aded at head node\n";
}

void after_head()
{
	nodeptr temp=new node;
	temp->data=14;
	temp->link=head->link;
	head->link=temp;
	cout<<"element added after head node\n";

}

void display()
{
	nodeptr here=head;
	while(here!=0)
	{
		cout<<here->data <<endl;
		here=here->link;
	}
}

void addafter()
{
	/*nodeptr ptr=head;
	while(ptr!=0)
	{
		if(ptr->data==12)
		{
			nodeptr pnew=new node;
			ptr->link=pnew;
			pnew->data=15;
			pnew->link=ptr->link;
		}
		
	}
	ptr=ptr->link;*/
	
	nodeptr ptr=head;
	nodeptr pnew;
	for(ptr=head;ptr!=0;ptr=ptr->link)
	{
		if(ptr->data==12)
		{
			pnew=new node;
			pnew->data=15;
			pnew->link=ptr->link;
			ptr->link=pnew;
			
		}
	}
	cout<<" 15 added after 12";
}

int _tmain(int argc, _TCHAR* argv[])
{

	head=new node; //creating head//
	head->data=12;
	head->link=0;
	before_head();
	display();
	after_head();
	
	display();
	addafter();
	cout<<endl;
	display();

	system("pause");
	return 0;
}



