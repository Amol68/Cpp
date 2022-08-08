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
      get_emp_details();
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
  calculate();
}
};


class bank_credit : private salary
{
  char bank[30];
  int acc_no;
    
    
  public:    
  void get_bank_details()
  {
      get_salary_details();
      
      cout<<"Enter Bank Name:";
      cin>>bank;
      
      cout<<"Enter Account No:";
      cin>>acc_no;
      cout<<endl<<endl;
  }
  
  void display_bank_details()
  {
      display_salary_details();
      cout<<"Bank Name: "<<bank<<endl;
      cout<<"Account Number:"<<acc_no<<endl<<endl;
  }
    
};

int main()
{
	int i,n;
	bank_credit b1;
	
	cout<<"Enter The Number Of Employees:";
	cin>>n;
	cout<<endl;
	
	for(int i=0; i<n; i++)
	{
		b1.get_bank_details();
	}
	
	
	for(i=0; i<n; i++)
	{
	    b1.display_bank_details();
	}
}