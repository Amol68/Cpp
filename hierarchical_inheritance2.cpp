#include <iostream>
using namespace std;

class Person 
{
    int eno;
    char name[20];	

public:
    void get_person_details()
    {
        cout << "Enter the Person number:";
        cin>>eno;
        cout << "Enter the Person name:";
        cin>>name;
        
    }
    
    void show_person_details()
    {
    	cout <<"Person number:"<<eno<<endl;
		cout <<"Person name:"<<name<<endl;
  }
};

class employee : private Person
{
  int eno;
  char des[30];
  
  
  public:
  void get_employee_details()
  {
      get_person_details();
      cout<<"Enter Employee No:";
      cin>>eno;
      
      cout<<"Enter Employee Designation:";
      cin>>des;
      
      cout<<endl;
 }
 
 void show_emp_details()
 {
     show_person_details();
     cout<<"Employee No:"<<eno<<endl;
     cout<<"Designation:"<<des<<endl;
 }
    
};

class student : private Person
{
  int age;
  char name[30];
  
  public:
    void get_student_details()
    {
        get_person_details();
        cout << "Enter Student Age:";
        cin>>age;
        cout << "Enter Name:";
        cin>>name;
        cout<<endl;
    }
    
    void show_student_details()
    {
        show_person_details();
    	cout <<"Student Age:"<<age<<endl;
		cout <<"Student name:"<<name;
  }

  
};

int main()
{
    student s1;
    s1.get_student_details();
    s1.show_student_details();
}