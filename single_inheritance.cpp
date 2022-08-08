#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[30];
	
	public:
	
	void get_emp_details()
	{
		cout<<"Enter Employee ID:";
		cin>>id;
		
		cout<<"Enter Name:";
		cin>>name;
	}
	
	void display_emp_details()
	{
		cout<<"Employee ID:"<<id<<endl;
		cout<<"Employee Name:"<<name<<endl;
	}
};

class salary : private employee
{
  int pf , da, np;
  
  public:
  
  void get_salary_details()
  {
  	cout<<"Enter Provident Fund:";
  	cin>>pf;
  	
  	cout<<"Enter Dearness Allowance:";
  	cin>>da;
}

  void calculate()
  {
  	np=pf+da;
  }
  
 void display_salary_details()
 {
 	display_emp_details();
  cout<<"Provident Fund:"<<pf<<endl;
  cout<<"Dearness Allowance:"<<da<<endl;
  cout<<"Net Pay:"<<np<<endl; 
    	cout<<endl;

}
};


int main()
{
	int i,n;
	salary s1;
	
	cout<<"Enter The Number Of Employees:";
	cin>>n;
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
		s1.get_emp_details();
		s1.get_salary_details();
		s1.calculate();
	}
	
	
	for(i=0; i<n; i++)
	{
	    s1.display_salary_details();
	}
}