#include<iostream>

using namespace std;

int main()
{
	
	int n=4321;
	int rev=0;
	
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n%10;
        n=n/10;		
	}
	
	cout<<rev;
	
	return 0;
	
}

