#include<iostream>

using namespace std;

int main()
{
	int n, rev=0;
	cout<<"Geben Sie Eine Zahl:  ";
	cin>>n;
	
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
		n=n/10;
	}
	
	cout<<"Reverse: "<<rev<<endl;
	
	if(rev==n)
	{
		cout<<"palindrome zahl!";
	}
	else
	{
			cout<<"nicht palindrome zahl!";
	
	}
	
}
