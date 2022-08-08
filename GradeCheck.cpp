#include<iostream>

using namespace std;

int main()
{
	int a;
	
	cout<<"Enter Your Marks:"<<endl;
	cin>>a;
	
	if((a>=0 && a<50))
	{
	  cout<<" Du Kannst Es Besser ...";
	}
	else if(a>=50 && a<70)
	{
	  cout<<" Gut!";
	}
	
	else if(a>=70 && a<80)
	{
	  cout<<" Sehr Gut!";
	}
	
	else if(a>=80 && a<90)
	{
	  cout<<" Exzellent!";
	}
	
		else if(a>=90 && a<=100)
	{
	  cout<<" Out Of!";
	}
	else
	{
		cout<<"Invalid Number";
	}
}
	

	

	
	
	

