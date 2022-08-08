#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	char op;
	 
	cout<<"Enter Two Values: ";
	cin>>a>>b;
	
	cout<<"Enter Operator: ";
	cin>>op;
	
	switch(op)
	{
		case '+':
		c=a+b;
		cout<<"Sum:"<<c;
		break;
		
		case '-':
		c=a-b;
		cout<<"Difference:"<<c;
	     break;
		
		case '*':
		c=a*b;
		cout<<"Product:"<<c;
		break;
		
		case '/':
	    c=a/b;
	    cout<<"Quotient:"<<c;
	    break;
	    
	    default:
	    cout<<"Invalid Character :)";
	    
		
	}
}
