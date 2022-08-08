#include<iostream>
using namespace std;

class weekday
{
  int day;

public:

 weekday()
{
	cout<<"Enter No:";
	cin>>day;

	switch(day)
	{
		case 1:
		cout<<"Monday";
		break;
		
		case 2:
		cout<<"Tuesday";
		break;
		
		case 3:
		cout<<"Wednesday";
		break;
		
	    case 4:
		cout<<"Thursday";
		break;
		
		defaut:
		cout<<"Invalid!";
		break;
	}
}

};

int main()
{
	weekday a1;
	
	return 0;
}
