#include <iostream>

using namespace std;

int main()
{
	int dividend , divisor , quotient , remainder;
	
	cout<<"Enter Dividend:";
	cin>>dividend;
	cout<<endl;
	
    cout<<"Enter Divisor:";
	cin>>divisor;
	cout<<endl;
	

    quotient= dividend / divisor;
	remainder= dividend % divisor;
	
	cout<<"Quotient Is: "<<quotient<<endl;
	cout<<"Remainder Is: "<<remainder<<endl;
		
}

