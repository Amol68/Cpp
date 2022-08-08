#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int &aref = a;
	
	cout<<"A:"<<a<<endl;
	cout<<"Ref:"<<aref<<endl<<endl;
	
	
    aref=20;
    cout<<"A:"<<a<<endl;
	cout<<"Ref:"<<aref<<endl<<endl;
	
	
	int b=10;
	int *p = &b;
	cout<<"B:"<<b<<endl;
	cout<<"P:"<<*p;
	return 0;
}
