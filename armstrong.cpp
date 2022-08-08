#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Geben Sie Eine Zahl: ";
	cin>>n;
	
	int temp, rem=0,result=0;
	temp=n;
	
	while(temp!=0)
	{
		rem= temp%10;
		result=result+rem*rem*rem;
		temp=temp/10;
	}
	
	if(result==n)
	{
		cout<<"Die Angegebne Zahl ist eine Armstrong Zahl !!!";
	}
	else
	{
	  		cout<<"Die Angegebne Zahl ist nicht eine Armstrong Zahl :)";
	
	}
	
}
