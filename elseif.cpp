#include <iostream>

using namespace std;

int main()
{
	int dividend , divisor , quotient , remainder;
	
	cout<<"Enter Dividend:"<<endl;
	cin>>dividend;
	
    cout<<"Enter Divisor:"<<endl;
	cin>>divisor;

    quotient= dividend / divisor;
	remainder= dividend % divisor;
	
	cout<<"Quotient Is"<<quotient<<endl;
	cout<<"Remainder Is"<<remainder<<endl;
		
}

